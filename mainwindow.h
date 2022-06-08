#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_b11_clicked();

    void on_b12_clicked();

    void on_b13_clicked();

    void on_b14_clicked();

    void on_b21_clicked();

    void on_b22_clicked();

    void on_b23_clicked();

    void on_b24_clicked();

    void on_b31_clicked();

    void on_b32_clicked();

    void on_b33_clicked();

    void on_b34_clicked();

    void on_b11_clicked(bool checked);

    void on_b11_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
