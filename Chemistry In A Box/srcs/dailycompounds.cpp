#include "dailycompounds.h"

#include "ui_dailycompounds.h"
#include <QThread>


dailycompounds::dailycompounds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dailycompounds)
{
    ui->setupUi(this);
    ui->label_2->setText(CompoundNames[CurrentIndex]);
    ui->widget->setStyleSheet("background-image:url(:/imgs/"+CompoundNames[CurrentIndex]+".png)");

    QPushButton *ElementButtons[8];
    for (int i = 0; i < 8; i++){
        QString ButName = Elements[i];
        ElementButtons[i] = dailycompounds::findChild<QPushButton *>(ButName);
        connect(ElementButtons[i], SIGNAL(released()), this, SLOT(ElementPressed()));
    }
    QPushButton *ValencyButtons[10];
    for (int i = 0; i < 8; i++){
        QString ButName = "Butt_" + QString::number(i);
        ValencyButtons[i] = dailycompounds::findChild<QPushButton *>(ButName);
        connect(ValencyButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
}

void dailycompounds::Next(){
    CurrentIndex++;
    compound = "";
    Dispcompound = "";

    ui->widget->setStyleSheet("background-image:url(:/imgs/"+CompoundNames[CurrentIndex]+".png)");
    ui->label_2->setText(CompoundNames[CurrentIndex]);
    ui->label->setText(compound);
}

void dailycompounds::ElementPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString buttval = button->text();
    QString compound2 = compound;
    compound2 += buttval;
    if (Compounds[CurrentIndex].startsWith(compound2)){
        Dispcompound += "<font size=3><b>"+buttval+"</b></font>";
        compound += buttval;
    }
    ui->label->setText(Dispcompound);

    if( Compounds[CurrentIndex]==compound){
        if (CurrentIndex < 7) {
            ui->label->setText(Dispcompound);
            Next();
        }
    }
}

void dailycompounds::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString buttval = button->text();
    QString compound2 = compound;
    compound2 += buttval;
    if (Compounds[CurrentIndex].startsWith(compound2)){
        Dispcompound += "<font size=0.5><b>"+buttval+"</b></font>";
        compound += buttval;
    }
    ui->label->setText(Dispcompound);
    if( Compounds[CurrentIndex]==compound && CurrentIndex < 7){
        ui->label->setText(Dispcompound);
        Next();
    }
}

dailycompounds::~dailycompounds()
{
    delete ui;
}
