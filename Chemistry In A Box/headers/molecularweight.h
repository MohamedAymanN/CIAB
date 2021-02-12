#ifndef MOLECULARWEIGHT_H
#define MOLECULARWEIGHT_H

#include <QMainWindow>
#include <QString>
#include <map>
#include <string>
#include <QMessageBox>

namespace Ui {
class MolecularWeight;
}

class MolecularWeight : public QMainWindow
{
    Q_OBJECT

public:
    explicit MolecularWeight(QWidget *parent = nullptr);
    ~MolecularWeight();

private slots:
    void on_calculate_clicked();

    void on_actionHelp_triggered();

    void on_actionExit_triggered();

private:
    Ui::MolecularWeight *ui;
    std::map<std::string,double> atomicMass;
};

#endif // MOLECULARWEIGHT_H
