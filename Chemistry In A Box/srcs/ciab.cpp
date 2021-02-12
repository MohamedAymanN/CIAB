#include "ciab.h"
#include "ui_ciab.h"

CIAB::CIAB(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CIAB)
{
    ui->setupUi(this);
    connect(ui->elementsBusters,SIGNAL(released()),SLOT(cwGame()));
    connect(ui->periodicTable,SIGNAL(released()),SLOT(pdGame()));
    connect(ui->molecularWeight,SIGNAL(released()),SLOT(mwGame()));
    connect(ui->dailycompounds,SIGNAL(released()),SLOT(dcGame()));
    connect(ui->equationbalancer,SIGNAL(released()),SLOT(ebGame()));
}

CIAB::~CIAB()
{
    delete ui;
}

void CIAB::cwGame(){
    //this->hide();
    this->cwG.show();
}

void CIAB::pdGame(){
    //this->hide();
    this->pdG.show();
}

void CIAB::mwGame(){
    //this->hide();
    this->mwG.show();
}

void CIAB::dcGame(){
    this->dcG.show();
}

void CIAB::ebGame(){
    this->ebG.show();
}
