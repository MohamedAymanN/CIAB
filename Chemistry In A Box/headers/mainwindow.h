#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMediaPlayer>
#include <QMessageBox>
#include "ui_mainwindow.h"
#include<bits/stdc++.h>


using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTextEdit *textEdits[49];
    QMediaPlayer* musicPlayer;
    //vector<int> guidedStart={0,1,3,4,6,7,12,19,21,27,30,37,42,47};
    int rOnlyIdxs[10]={5,15,16,20,25,29,35,36,45,46};
    string words[49]={"b","bi","ce","p","s","","he"
                       ,"ar","i","al","o","ca","be","at"
                       ,"g","","","la","n","h",""
                       ,"i","re","la","nd","","ac","o"
                       ,"n","","c","ra","c","k","be"
                       ,"","","u","ni","v","er","se"
                       ,"ca","n","dy","","","fl","ag"};
    Ui::MainWindow *ui;
private slots:
    void submitPressed();
    void onoffPressed();
    void limitLength();
};

#endif // MAINWINDOW_H
