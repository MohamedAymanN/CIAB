#include "molecularweight.h"
#include "ui_molecularweight.h"


MolecularWeight::MolecularWeight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MolecularWeight)
{
    ui->setupUi(this);
    this->setWindowTitle("Molecular Weight Calculator");
    setFixedSize(width(), height());
    atomicMass["H"] = 1.00794;
    atomicMass["He"] = 4.002602;
    atomicMass["Li"] = 6.941;
    atomicMass["Be"] = 9.01218;
    atomicMass["B"] = 10.811;
    atomicMass["C"] = 12.011;
    atomicMass["N"] = 14.00674;
    atomicMass["O"] = 15.9994;
    atomicMass["F"] = 18.998403;
    atomicMass["Ne"] = 20.1797;
    atomicMass["Na"] = 22.989768;
    atomicMass["Mg"] = 24.305;
    atomicMass["Al"] = 26.981539;
    atomicMass["Si"] = 28.0855;
    atomicMass["P"] = 30.973762;
    atomicMass["S"] = 32.066;
    atomicMass["Cl"] = 35.4527;
    atomicMass["Ar"] = 39.948;
    atomicMass["K"] = 39.0983;
    atomicMass["Ca"] = 40.078;
    atomicMass["Sc"] = 44.95591;
    atomicMass["Ti"] = 47.88;
    atomicMass["V"] = 50.9415;
    atomicMass["Cr"] = 51.9961;
    atomicMass["Mn"] = 54.93805;
    atomicMass["Fe"] = 55.847;
    atomicMass["Co"] = 58.9332;
    atomicMass["Ni"] = 58.6934;
    atomicMass["Cu"] = 63.546;
    atomicMass["Zn"] = 65.39;
    atomicMass["Ga"] = 69.723;
    atomicMass["Ge"] = 72.61;
    atomicMass["As"] = 74.92159;
    atomicMass["Se"] = 78.96;
    atomicMass["Br"] = 79.904;
    atomicMass["Kr"] = 83.8;
    atomicMass["Rb"] = 85.4678;
    atomicMass["Sr"] = 87.62;
    atomicMass["Y"] = 88.90585;
    atomicMass["Zr"] = 91.224;
    atomicMass["Nb"] = 92.90638;
    atomicMass["Mo"] = 95.94;
    atomicMass["Tc"] = 97.9072;
    atomicMass["Ru"] = 101.07;
    atomicMass["Rh"] = 102.9055;
    atomicMass["Pd"] = 106.42;
    atomicMass["Ag"] = 107.8682;
    atomicMass["Cd"] = 112.411;
    atomicMass["In"] = 114.818;
    atomicMass["Sn"] = 118.71;
    atomicMass["Sb"] = 121.76;
    atomicMass["Te"] = 127.6;
    atomicMass["I"] = 126.90447;
    atomicMass["Xe"] = 131.29;
    atomicMass["Cs"] = 132.90543;
    atomicMass["Ba"] = 137.327;
    atomicMass["La"] = 138.9055;
    atomicMass["Ce"] = 140.115;
    atomicMass["Pr"] = 140.90765;
    atomicMass["Nd"] = 144.24;
    atomicMass["Pm"] = 144.9127;
    atomicMass["Sm"] = 150.36;
    atomicMass["Eu"] = 151.965;
    atomicMass["Gd"] = 157.25;
    atomicMass["Tb"] = 158.92534;
    atomicMass["Dy"] = 162.5;
    atomicMass["Ho"] = 164.93032;
    atomicMass["Er"] = 167.26;
    atomicMass["Tm"] = 168.93421;
    atomicMass["Yb"] = 173.04;
    atomicMass["Lu"] = 174.967;
    atomicMass["Hf"] = 178.49;
    atomicMass["Ta"] = 180.9479;
    atomicMass["W"] = 183.84;
    atomicMass["Re"] = 186.207;
    atomicMass["Os"] = 190.23;
    atomicMass["Ir"] = 192.22;
    atomicMass["Pt"] = 195.08;
    atomicMass["Au"] = 196.96654;
    atomicMass["Hg"] = 200.59;
    atomicMass["Tl"] = 204.3833;
    atomicMass["Pb"] = 207.2;
    atomicMass["Bi"] = 208.98037;
    atomicMass["Po"] = 208.9824;
    atomicMass["At"] = 209.9871;
    atomicMass["Rn"] = 222.0176;
    atomicMass["Fr"] = 223.0197;
    atomicMass["Ra"] = 226.0254;
    atomicMass["Ac"] = 227.0278;
    atomicMass["Th"] = 232.0381;
    atomicMass["Pa"] = 231.03588;
    atomicMass["U"] = 238.0289;
    atomicMass["Np"] = 237.048;
    atomicMass["Pu"] = 244.0642;
    atomicMass["Am"] = 243.0614;
    atomicMass["Cm"] = 247.0703;
    atomicMass["Bk"] = 247.0703;
    atomicMass["Cf"] = 251.0796;
    atomicMass["Es"] = 252.083;
    atomicMass["Fm"] = 257.0951;
    atomicMass["Md"] = 258.1;
    atomicMass["No"] = 259.1009;
    atomicMass["Lr"] = 262.11;
    atomicMass["Rf"] =  261;
    atomicMass["Db"] =  262;
    atomicMass["Sg"] =  266;
    atomicMass["Bh"] =  264;
    atomicMass["Hs"] =  269;
    atomicMass["Mt"] =  268;
    atomicMass["Uun"] =  269;
    atomicMass["Uuu"] =  272;
    atomicMass["Uub"] =  277;
    atomicMass["Uut"] =  -1;
    atomicMass["Uuq"] =  289;
    atomicMass["Uup"] =  -1;
    atomicMass["Uuh"] =  -1;
    atomicMass["Uus"] =  -1;
    atomicMass["Uuo"] =  -1;
}

MolecularWeight::~MolecularWeight()
{
    delete ui;
}

void MolecularWeight::on_calculate_clicked()
{
    QMessageBox alert;
    alert.setText("Invalid Formula, Please re-enter.");
    //get text from user and turn it into QString
    QString chemicalFormula = ui->inputText->toPlainText();
    QString tempString = "";
    QString bracketString = "";
    QString intString  = "1";
    double finalMass = 0;
    double bracketMass = 0;
    double tempSubscript = 1;
    int numberOfElements = 0;

    //Main loop for formula
    for(int i = 0; i < chemicalFormula.length();i++)
    {
        //check for element start
        if(chemicalFormula[i] == "(")
        {
            i++;
            while(chemicalFormula[i] != ")" && i < chemicalFormula.length())
            {
                bracketString += chemicalFormula[i];
                i++;
            }
            i++;
            for(int j = 0; j < bracketString.length();j++)
            {
                if(bracketString[j] == bracketString[j].toUpper() && bracketString[j].isLetter())
                {
                    numberOfElements++;
                    tempString += bracketString[j];
                    j++;
                }
                while(bracketString[j] == bracketString[j].toLower() && j < bracketString.length() && bracketString[j].isLetter())
                {
                    tempString += bracketString[j];
                    j++;
                }
                if(bracketString[j].isDigit()) intString = "";
                while(bracketString[j].isDigit() && j < bracketString.length())
                {
                    intString += bracketString[j];
                    j++;
                }
                j--;
                std::string text = tempString.toLocal8Bit().constData();
                if(atomicMass[text] == 0.0)
                {
                    alert.exec();
                    ui -> result -> setText("##");
                    ui -> elementsCount -> setText("##");
                    return;
                }
                tempSubscript = intString.toDouble();
                bracketMass += (atomicMass[text])*(tempSubscript);
                tempString = "";
                intString = "1";
                tempSubscript = 1;
            }

            if(chemicalFormula[i].isDigit()) intString = "";
            while(chemicalFormula[i].isDigit() && i < chemicalFormula.length())
            {
                intString += chemicalFormula[i];
                i++;
            }
            i--;
            tempSubscript = intString.toDouble();
            finalMass += bracketMass*tempSubscript;
            tempString = "";
            intString = "1";
            tempSubscript = 1;
            bracketMass = 0;
        }


        else if(chemicalFormula[i] == chemicalFormula[i].toUpper() && chemicalFormula[i].isLetter())
        {
            numberOfElements++;
            tempString += chemicalFormula[i];
            i++;

            //grabs the rest of the element's letters
            while(chemicalFormula[i] == chemicalFormula[i].toLower() && i < chemicalFormula.length() && chemicalFormula[i].isLetter())
            {
                tempString += chemicalFormula[i];
                i++;
            }

            //gets the subscript after the element
            if(chemicalFormula[i].isDigit()) intString = "";
            while(chemicalFormula[i].isDigit() && i < chemicalFormula.length())
            {
                intString += chemicalFormula[i];
                i++;
            }
            i--;

            //calulates the total weight of the element
            std::string text = tempString.toLocal8Bit().constData();
            if(atomicMass[text] == 0.0)
            {
                alert.exec();
                ui -> result -> setText("##");
                ui -> elementsCount -> setText("##");
                return;
            }
            tempSubscript = intString.toDouble();
            finalMass += (atomicMass[text])*(tempSubscript);
            tempString = "";
            intString = "1";
            tempSubscript = 1;
        }


        else
        {
            ui -> result -> setText("##");
            ui -> elementsCount -> setText("##");
            alert.exec();
            return;
        }
    }
    ui -> result -> setText(QString::number(finalMass));
    ui -> elementsCount -> setText(QString::number(numberOfElements));
}

void MolecularWeight::on_actionHelp_triggered()
{
    QMessageBox help;
    help.setText("Contact info: K.Elghamry@nu.edu.eg");
    help.exec();
}

void MolecularWeight::on_actionExit_triggered()
{
    QApplication::quit();
}
