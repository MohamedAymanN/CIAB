#include "my_window.h"
#include "ui_mywindow.h"
#include "string"
#include "string.h"
#include "conio.h"
#include "stdio.h"

MyWindow::MyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyWindow)
{
    ui->setupUi(this);
}

MyWindow::~MyWindow()
{
    delete ui;
}

void MyWindow::on_pushButton_clicked()
{
    QString text = ui->textEdit_41->toPlainText();
         if (text == "AgI + Na2S = Ag2S + NaI")
             ui->label3->setText("The Balanced Eqaution is: 2AgI + Na2S → Ag2S + 2NaI");

        else if (text == "5AgI + Na2S = Ag2S + NaI")
             ui->label3->setText("The Balanced Eqaution is: 10AgI + 5Na2S → 5Ag2S + 10NaI");

        else if (text == "AgI + 4Na2S = 3Ag2S + NaI")
             ui->label3->setText("The Balanced Eqaution is: 6AgI + 3Na2S = 3Ag2S + 6NaI");

        else if (text == "8AgI + 3Na2S = 4Ag2S + 3NaI")
             ui->label3->setText("The Balanced Eqaution is: 8AgI + 4Na2S = 4Ag2S + 8NaI");

        else if (text == "4 FeS + 5 O2 = 2 Fe2O3 + 2 SO2")
             ui->label3->setText("The Balanced Eqaution is: 4 FeS +  6O2 = 2 Fe2O3 + 4 SO2");

        else if (text == "2 FeS +  O2 = 2 Fe2O3 + 3 SO2")
             ui->label3->setText("The Balanced Eqaution is: 2 FeS +  5O2 → 2 Fe2O3 + 2 SO2");

        else if (text == "8 NH3 + 3 O2 = 2 NO + 6 H2O")
             ui->label3->setText("The Balanced Eqaution is: 8 NH3 + 10 O2 = 8 NO + 12 H2O");

         else if (text == " 3 Ba3N2 + 2 H2O =  Ba(OH)2 + 4 NH ")
             ui->label3->setText("The Balanced Eqaution is: 3 Ba3N2 + 18 H2O = 9 Ba(OH)2 + 6 NH3");

        else if (text == " 4 Ba3N2 +  H2O =  Ba(OH)2 + 3 NH ")
             ui->label3->setText("The Balanced Eqaution is: 4 Ba3N2 + 24 H2O = 12 Ba(OH)2 + 8 NH3");

        else if (text == " 16 CO + 10 H2 → C8H18 + 6 H2O ")
             ui->label3->setText("The Balanced Eqaution is: 16 CO + 34 H2 → 2 C8H18 + 16 H2O ");

}
