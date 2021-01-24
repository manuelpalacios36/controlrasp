#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtSerialPort/QSerialPort>
  QSerialPort serial;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial.setPortName("/dev/ttyUSB0");
    serial.setBaudRate(QSerialPort::Baud9600);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);
    serial.open(QIODevice::WriteOnly);



}

MainWindow::~MainWindow()
{
    delete ui;
    serial.close();
}


void MainWindow::on_FRENTE_pressed()
{
  serial.write("f");
}

void MainWindow::on_IZQUIERDA_pressed()
{
    serial.write("i");
}

void MainWindow::on_DERECHA_pressed()
{
  serial.write("d");
}

void MainWindow::on_ATRAS_pressed()
{
  serial.write("a");
}

void MainWindow::on_F1_clicked()
{
    serial.write("w");
}

void MainWindow::on_F2_clicked()
{
 serial.write("x");
}

void MainWindow::on_F3_clicked()
{
   serial.write("y");
}

void MainWindow::on_F4_clicked()
{
   serial.write("z");
}
