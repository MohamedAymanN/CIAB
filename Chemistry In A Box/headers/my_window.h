#ifndef MY_WINDOW_H
#define MY_WINDOW_H

#include <QMainWindow>

namespace Ui {
class MyWindow;
}

class MyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyWindow(QWidget *parent = nullptr);
    ~MyWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyWindow *ui;
};

#endif // MY_WINDOW_H
