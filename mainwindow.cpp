#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QThread"
QPushButton *buttoon[12];//сылки на кнопки
bool life[12];//номер места
int naibors[12];//кол-во соседей

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//шаг и обновление всех состояний
{
    for(int i = 0; i <12;++i)
    {

    if(life[i+1] == true)
    {
     naibors[i] +=1;
    }
    if(life[i-1] == true)
    {
     naibors[i] +=1;
    }
    if(life[i+4] == true)
    {
     naibors[i] +=1;
    }
    if(life[i-4] == true)
    {
     naibors[i] +=1;
    }
    if(life[i+3] == true)
    {
     naibors[i] +=1;
    }
    if(life[i+5] == true)
    {
     naibors[i] +=1;
    }
    if(life[i-3] == true)
    {
     naibors[i] +=1;
    }
    if(life[i-5] == true)
    {
     naibors[i] +=1;
    }

    if(naibors[i] ==3)
    {
        life[i] = true;
        buttoon[i]->setStyleSheet("background-color: red");
    }

    if(naibors[i] >3)
    {
        life[i] = false;
        buttoon[i]->setStyleSheet("background-color: white");
    }

    if(naibors[i] <= 1)
    {
        life[i] = false;
        buttoon[i]->setStyleSheet("background-color: white");
    }

    }

    for(int i = 0; i <12;++i)
    {
        naibors[i] = 0;
    }
}

void MainWindow::on_pushButton_2_clicked()//очистка
{

    for(int i = 0; i <12;++i)
    {
    life[i] = false;
    buttoon[i]->setStyleSheet("background-color: white");
    }

    for(int i = 0; i <12;++i)
    {
        naibors[i] = 0;
    }
}





void MainWindow::on_b11_clicked()
{
 buttoon[0] = static_cast<QPushButton*>(sender());
 buttoon[0]->setStyleSheet("background-color: red");
 life[0] = true;
}

void MainWindow::on_b12_clicked()//смена цвета по ножатию
{
    buttoon[1] = static_cast<QPushButton*>(sender());
    buttoon[1]->setStyleSheet("background-color: red");
    life[1] = true;
}

void MainWindow::on_b13_clicked()
{
    buttoon[2] = static_cast<QPushButton*>(sender());
    buttoon[2]->setStyleSheet("background-color: red");
    life[2] = true;

}

void MainWindow::on_b14_clicked()
{
    buttoon[3] = static_cast<QPushButton*>(sender());
    buttoon[3]->setStyleSheet("background-color: red");
    life[3] = true;
}

void MainWindow::on_b21_clicked()
{
    buttoon[4] = static_cast<QPushButton*>(sender());
    buttoon[4]->setStyleSheet("background-color: red");
    life[4] = true;
}

void MainWindow::on_b22_clicked()
{
    buttoon[5] = static_cast<QPushButton*>(sender());
    buttoon[5]->setStyleSheet("background-color: red");
    life[5] = true;
}

void MainWindow::on_b23_clicked()
{
    buttoon[6] = static_cast<QPushButton*>(sender());
    buttoon[6]->setStyleSheet("background-color: red");
    life[6] = true;
}

void MainWindow::on_b24_clicked()
{
    buttoon[7] = static_cast<QPushButton*>(sender());
    buttoon[7]->setStyleSheet("background-color: red");
    life[7] = true;
}

void MainWindow::on_b31_clicked()
{
    buttoon[8] = static_cast<QPushButton*>(sender());
    buttoon[8]->setStyleSheet("background-color: red");
    life[8] = true;
}

void MainWindow::on_b32_clicked()
{
    buttoon[9] = static_cast<QPushButton*>(sender());
    buttoon[9]->setStyleSheet("background-color: red");
    life[9] = true;
}

void MainWindow::on_b33_clicked()
{
    buttoon[10] = static_cast<QPushButton*>(sender());
    buttoon[10]->setStyleSheet("background-color: red");
    life[10] = true;
}

void MainWindow::on_b34_clicked()
{
    buttoon[11] = static_cast<QPushButton*>(sender());
    buttoon[11]->setStyleSheet("background-color: red");
    life[11] = true;
}


void MainWindow::on_b11_released()
{

}

void MainWindow::on_b11_clicked(bool checked = true)
{
    buttoon[0] = static_cast<QPushButton*>(sender());
    buttoon[0]->setStyleSheet("background-color: red");
}
