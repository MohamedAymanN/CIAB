#ifndef CIAB_H
#define CIAB_H

#include <QMainWindow>
#include "mainwindow.h"
#include "periodictable.h"
#include "molecularweight.h"
#include "dailycompounds.h"
#include "my_window.h"


namespace Ui {
class CIAB;
}

class CIAB : public QMainWindow
{
    Q_OBJECT

public:
    explicit CIAB(QWidget *parent = nullptr);
    ~CIAB();

private:
    Ui::CIAB *ui;
    MainWindow cwG;
    PeriodicTable pdG;
    MolecularWeight mwG;
    dailycompounds dcG;
    MyWindow ebG;
private slots:
    void cwGame();
    void pdGame();
    void mwGame();
    void dcGame();
    void ebGame();

};

#endif // CIAB_H
