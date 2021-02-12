#include "periodictable.h"
#include "ui_periodictable.h"
#include<bits/stdc++.h>
#include <windows.h>
#include <QKeyEvent>



using namespace std;

PeriodicTable::PeriodicTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PeriodicTable)
{
    ui->setupUi(this);
    setFixedSize(width(), height());
    connect(ui->mainmenu,SIGNAL(released()),this,SLOT(backToMain()));
    //ui-> NULogo ->setPixmap(QPixmap("Nile-University-NU-Logo-880x660.png"));
}

PeriodicTable::~PeriodicTable()
{
    delete ui;
}

//gets info from each element

string ExePath() {
    WCHAR buffer[2000];
    GetModuleFileName( NULL, buffer, 2000 );
    wstring ws(buffer);
    string str(ws.begin(), ws.end());
    string::size_type pos = str.find_last_of( "\\/" );
    return str.substr( 0, pos);

}
QString PeriodicTable::getInfo(QString filename)
{
    QMessageBox *alert = new QMessageBox();
    QFile file("../ChemistryInABox/elements/"+ filename+ ".txt");
    if(!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(alert,"warning","cannot open file");
        return "NULL";
    }
    QTextStream in(&file);
    in.setCodec("UTF-8");

    int counter = 1;
    QString text1 = "";
    QString text2 = "";
    while (!in.atEnd())
    {
       QString line = in.readLine();
       if(counter <= 6)
       {
           text1 += line +"\n";
           counter++;
       }
       else{
           text2 += line + "\n";
       }
    }
    file.close();
    ui -> infoBox2 -> setText(text2);
    return text1;
}

//Action buttons
void PeriodicTable::on_actionExit_triggered()
{
    QCoreApplication::quit();
}

void PeriodicTable::on_actionHelp_triggered()
{
    QMessageBox *help = new QMessageBox();
    help -> setText("contact info: K.Elghamry@nu.edu.eg");
    help -> show();
}

void PeriodicTable::on_actionreset_triggered()
{
    ui-> infoBox -> setText("");
    ui-> infoBox2 -> setText("");
    ui -> elementBox -> setText("Periodic Table");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #F2F2F3; border: 1px solid #AFAFAF;}");
}

//periodic table buttons
void PeriodicTable::on_heliumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Helium"));
    ui -> elementBox -> setText("Helium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9D924;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_neonButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Neon"));
    ui -> elementBox -> setText("Neon");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9D924;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_argonButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Argon"));
    ui -> elementBox -> setText("Argon");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9D924;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_kryptonButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Krypton"));
    ui -> elementBox -> setText("Krypton");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9D924;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_xenonButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Xenon"));
    ui -> elementBox -> setText("Xenon");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9D924;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_radonButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Radon"));
    ui -> elementBox -> setText("Radon");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9D924;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_oganessonButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Oganesson"));
    ui -> elementBox -> setText("Oganesson");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9D924;border: 1px solid #AFAFAF;}");
}


void PeriodicTable::on_flourineButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Fluorine"));
    ui -> elementBox -> setText("Fluorine");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9B37E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_chlorineButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Chlorine"));
    ui -> elementBox -> setText("Chlorine");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9B37E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_bromineButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Bromine"));
    ui -> elementBox -> setText("Bromine");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9B37E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_iodineButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Iodine"));
    ui -> elementBox -> setText("Iodine");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9B37E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_astatineButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Astatine"));
    ui -> elementBox -> setText("Astatine");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9B37E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_tennessineButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Tennessine"));
    ui -> elementBox -> setText("Tennessine");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #E9B37E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_oxygenButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Oxygen"));
    ui -> elementBox -> setText("Oxygen");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EFB221;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_sulfurButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Sulfur"));
    ui -> elementBox -> setText("Sulfur");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EFB221;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_seleniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Selenium"));
    ui -> elementBox -> setText("Selenium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EFB221;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_telluriumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Tellurium"));
    ui -> elementBox -> setText("Tellurium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EFB221;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_poloniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Polonium"));
    ui -> elementBox -> setText("Polonium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EFB221;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_livermoriumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Livermorium"));
    ui -> elementBox -> setText("Livermorium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EFB221;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_nitrogenButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Nitrogen"));
    ui -> elementBox -> setText("Nitrogen");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #B5B8B9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_phosphorusButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Phosphorus"));
    ui -> elementBox -> setText("Phosphorus");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #B5B8B9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_arsenicButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Arsenic"));
    ui -> elementBox -> setText("Arsenic");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #B5B8B9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_antimonyButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Antimony"));
    ui -> elementBox -> setText("Antimony");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #B5B8B9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_bismuthButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Bismuth"));
    ui -> elementBox -> setText("Bismuth");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #B5B8B9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_moscoviumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Moscovium"));
    ui -> elementBox -> setText("Moscovium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #B5B8B9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_carbonButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Carbon"));
    ui -> elementBox -> setText("Carbon");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #D1A2CA;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_siliconButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Silicon"));
    ui -> elementBox -> setText("Silicon");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #D1A2CA;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_germaniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Germanium"));
    ui -> elementBox -> setText("Germanium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #D1A2CA;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_tinButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Tin"));
    ui -> elementBox -> setText("Tin");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #D1A2CA;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_leadButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Lead"));
    ui -> elementBox -> setText("Lead");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #D1A2CA;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_fleroviumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Flerovium"));
    ui -> elementBox -> setText("Flerovium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #D1A2CA;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_borronButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Boron"));
    ui -> elementBox -> setText("Boron");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #CDDB28;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_aluminiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Aluminium"));
    ui -> elementBox -> setText("Aluminium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #CDDB28;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_galliumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Gallium"));
    ui -> elementBox -> setText("Gallium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #CDDB28;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_indiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Indium"));
    ui -> elementBox -> setText("Indium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #CDDB28;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_thalliumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Thallium"));
    ui -> elementBox -> setText("Thallium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #CDDB28;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_nihoniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Nihonium"));
    ui -> elementBox -> setText("Nihonium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #CDDB28;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_zincButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Zinc"));
    ui -> elementBox -> setText("Zinc");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_cadmiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Cadmium"));
    ui -> elementBox -> setText("Cadmium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_mercuryButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Mercury"));
    ui -> elementBox -> setText("Mercury");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_coperniciumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Copernicium"));
    ui -> elementBox -> setText("Copernicium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_nickelButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Nickel"));
    ui -> elementBox -> setText("Nickel");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_palladiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Palladium"));
    ui -> elementBox -> setText("Palladium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_platinumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Platinum"));
    ui -> elementBox -> setText("Platinum");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_darmstadtiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Darmstadtium"));
    ui -> elementBox -> setText("Darmstadtium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_copperButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Copper"));
    ui -> elementBox -> setText("Copper");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_silverButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Silver"));
    ui -> elementBox -> setText("Silver");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_goldButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Gold"));
    ui -> elementBox -> setText("Gold");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_roentgeniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Roentgenium"));
    ui -> elementBox -> setText("Roentgenium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_cobaltButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Cobalt"));
    ui -> elementBox -> setText("Cobalt");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}


void PeriodicTable::on_rhodiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Rhodium"));
    ui -> elementBox -> setText("Rhodium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_iridiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Iridium"));
    ui -> elementBox -> setText("Iridium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_meitneriumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Meitnerium"));
    ui -> elementBox -> setText("Meitnerium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_ironButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Iron"));
    ui -> elementBox -> setText("Iron");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_rutheniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Ruthenium"));
    ui -> elementBox -> setText("Ruthenium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_osmiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Osmium"));
    ui -> elementBox -> setText("Osmium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_hassiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Hassium"));
    ui -> elementBox -> setText("Hassium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_manganeseButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Manganese"));
    ui -> elementBox -> setText("Manganese");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_technetiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Technetium"));
    ui -> elementBox -> setText("Technetium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_rheniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Rhenium"));
    ui -> elementBox -> setText("Rhenium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_bohriumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Bohrium"));
    ui -> elementBox -> setText("Bohrium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_chromiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Chromium"));
    ui -> elementBox -> setText("Chromium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_molybdenumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Molybdenum"));
    ui -> elementBox -> setText("Molybdenum");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_tungstenButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Tungsten"));
    ui -> elementBox -> setText("Tungsten");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_seaborgiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Seaborgium"));
    ui -> elementBox -> setText("Seaborgium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_vanadiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Vanadium"));
    ui -> elementBox -> setText("Vanadium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_niobiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Niobium"));
    ui -> elementBox -> setText("Niobium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_tantalumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Tantalum"));
    ui -> elementBox -> setText("Tantalum");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_dubniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Dubnium"));
    ui -> elementBox -> setText("Dubnium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_titaniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Titanium"));
    ui -> elementBox -> setText("Titanium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_zirconiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Zirconium"));
    ui -> elementBox -> setText("Zirconium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_hafniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Hafnium"));
    ui -> elementBox -> setText("Hafnium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_rutherfordiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Rutherfordium"));
    ui -> elementBox -> setText("Rutherfordium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_scandiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Scandium"));
    ui -> elementBox -> setText("Scandium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_yttriumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Yttrium"));
    ui -> elementBox -> setText("Yttrium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #5CC2E7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_lanthanumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Lanthanum"));
    ui -> elementBox -> setText("Lanthanum");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_actiniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Actinium"));
    ui -> elementBox -> setText("Actinium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_berylliumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Beryllium"));
    ui -> elementBox -> setText("Beryllium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #F7C9DE;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_magnesiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Magnesium"));
    ui -> elementBox -> setText("Magnesium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #F7C9DE;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_calciumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Calcium"));
    ui -> elementBox -> setText("Calcium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #F7C9DE;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_strontiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Strontium"));
    ui -> elementBox -> setText("Strontium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #F7C9DE;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_bariumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Barium"));
    ui -> elementBox -> setText("Barium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #F7C9DE;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_radiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Radium"));
    ui -> elementBox -> setText("Radium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #F7C9DE;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_hydrogenButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Hydrogen"));
    ui -> elementBox -> setText("Hydrogen");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A3C6D1;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_lithiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Lithium"));
    ui -> elementBox -> setText("Lithium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EABED7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_sodiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Sodium"));
    ui -> elementBox -> setText("Sodium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EABED7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_postasiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Potassium"));
    ui -> elementBox -> setText("Potassium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EABED7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_rubidiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Rubidium"));
    ui -> elementBox -> setText("Rubidium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EABED7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_caesiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Caesium"));
    ui -> elementBox -> setText("Caesium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EABED7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_franciumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Francium"));
    ui -> elementBox -> setText("Francium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #EABED7;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_ceriumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Cerium"));
    ui -> elementBox -> setText("Cerium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_praseodymiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Praseodymium"));
    ui -> elementBox -> setText("Praseodymium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_neodymiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Neodymium"));
    ui -> elementBox -> setText("Neodymium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_promethiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Promethium"));
    ui -> elementBox -> setText("Promethium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_samariumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Samarium"));
    ui -> elementBox -> setText("Samarium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_europiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Europium"));
    ui -> elementBox -> setText("Europium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_gadoliniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Gadolinium"));
    ui -> elementBox -> setText("Gadolinium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_terbiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Terbium"));
    ui -> elementBox -> setText("Terbium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_dysprosiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Dysprosium"));
    ui -> elementBox -> setText("Dysprosium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_holmiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Holmium"));
    ui -> elementBox -> setText("Holmium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_erbiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Erbium"));
    ui -> elementBox -> setText("Erbium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_thuliumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Thulium"));
    ui -> elementBox -> setText("Thulium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_ytterbiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Ytterbium"));
    ui -> elementBox -> setText("Ytterbium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_lutetiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Lutetium"));
    ui -> elementBox -> setText("Lutetium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #C0E5E9;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_thoriumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Thorium"));
    ui -> elementBox -> setText("Thorium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_protactiniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Protactinium"));
    ui -> elementBox -> setText("Protactinium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_uraniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Uranium"));
    ui -> elementBox -> setText("Uranium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_neptuniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Neptunium"));
    ui -> elementBox -> setText("Neptunium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_plutoniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Plutonium"));
    ui -> elementBox -> setText("Plutonium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_americiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Americium"));
    ui -> elementBox -> setText("Americium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_curiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Curium"));
    ui -> elementBox -> setText("Curium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_berkeliumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Berkelium"));
    ui -> elementBox -> setText("Berkelium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_californiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Californium"));
    ui -> elementBox -> setText("Californium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_einsteiniumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Einsteinium"));
    ui -> elementBox -> setText("Einsteinium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_fermiumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Fermium"));
    ui -> elementBox -> setText("Fermium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_mendeleviumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Mendelevium"));
    ui -> elementBox -> setText("Mendelevium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_nobeliumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Nobelium"));
    ui -> elementBox -> setText("Nobelium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::on_lawrenciumButton_clicked()
{
    ui-> infoBox -> setText(getInfo("Lawrencium"));
    ui -> elementBox -> setText("Lawrencium");
    ui -> elementBox -> setStyleSheet("QLabel {background-color: #A1CD4E;border: 1px solid #AFAFAF;}");
}

void PeriodicTable::backToMain(){
    this->hide();
}
