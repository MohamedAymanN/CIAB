#ifndef DAILYCOMPOUNDS_H
#define DAILYCOMPOUNDS_H


#include <QMainWindow>


namespace Ui {
class dailycompounds;
}

class dailycompounds : public QMainWindow
{
    Q_OBJECT

public:
    explicit dailycompounds(QWidget *parent = nullptr);
    ~dailycompounds();

private:
    Ui::dailycompounds *ui;
    void Next();
    int CurrentIndex = 0;
    QString Elements[8] = {"H", "Na", "Cl", "O", "Fe", "C", "N", "He"};
    QString CompoundNames[7] = {"Water", "Salt", "Sugar",    "Baking Soda", "Bleach", "Methane", "Acetone"};
    QString Compounds[7] =       {"H2O",   "NaCl", "C12H22O11","NaHCO3",      "NaClO",  "CH4",     "C3H6O"};
    QString compound = "";
    QString Dispcompound = "";
private slots:
    void ElementPressed();
    void NumPressed();
};

#endif // DAILYCOMPOUNDS_H
