#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    int rOnlyIdx=0;
    for(int i=0;i<49;i++){
        QString editName = "textEdit"+QString::number(i);
        textEdits[i] = MainWindow::findChild<QTextEdit*>(editName);
        textEdits[i]->setAlignment(Qt::AlignCenter);
        textEdits[i]->setTextColor(Qt::blue);
        connect(textEdits[i],SIGNAL(textChanged()),this,SLOT(limitLength()));
        QPalette p = textEdits[i]->palette();
        p.setColor(QPalette::Text, Qt::blue);
        textEdits[i]->setPalette(p);
        if(i == rOnlyIdxs[rOnlyIdx] && rOnlyIdx<10){
            textEdits[i]->setReadOnly(true);
            QPalette p = textEdits[i]->palette();
            p.setColor(QPalette::Base, Qt::black);
            p.setColor(QPalette::Base, Qt::black);
            textEdits[i]->setPalette(p);
            rOnlyIdx++;
        }
    }

    this->setFixedSize(800,650);
    this->centralWidget()->setStyleSheet(
           "background-image:url(\"appBG.jpeg\"); background-position: center;" );

    connect(ui->submitButton,SIGNAL(released()),this,SLOT(submitPressed()));
    connect(ui->onoffBut,SIGNAL(released()),this,SLOT(onoffPressed()));
    musicPlayer = new QMediaPlayer();
    musicPlayer->setMedia(QUrl("qrc:/music/bgMusic.mp3"));
    musicPlayer->play();
    setWindowIcon(QIcon(":/imgs/like.png"));
    setWindowTitle("Elements Busters");


}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::submitPressed(){
    bool success=true;
    for(int i=0;i<49;i++){
        string temp = textEdits[i]->toPlainText().toStdString();
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if(temp != this->words[i]){
            success = false;
            break;
        }
    }

    if(success){
        QMessageBox::information(
            this,
            tr("Game Progress"),
            tr("You Won, Congratulations"));
    }else{
        QMessageBox::information(
            this,
            tr("Game Progress"),
            tr("Uhh Try harder mate, you ve got this"));
    }

}

void MainWindow::limitLength(){
    QObject * obj = sender();
    QTextEdit * sender = qobject_cast<QTextEdit*>(obj);
    int size = sender->toPlainText().size();
    if(size>2) sender->textCursor().deletePreviousChar();
}

void MainWindow::onoffPressed(){
    if(musicPlayer->state()==QMediaPlayer::PlayingState){
        musicPlayer->pause();
        ui->onoffBut->setStyleSheet("background-image: url(:/imgs/speaker.png);border-style: solid;border-width:1px;border-radius:22.5px;max-width:45px;max-height:45px;min-width:45px;min-height:45px;");
    }else if(musicPlayer->state()==QMediaPlayer::PausedState){
        musicPlayer->play();
        ui->onoffBut->setStyleSheet("background-color: white;background-image: url(:/imgs/mute.png);border-style: solid;border-width:1px;border-radius:22.5px;max-width:45px;max-height:45px;min-width:45px;min-height:45px;");
    }
}
