#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSerialPort/QSerialPort>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_FRENTE_pressed();

    void on_IZQUIERDA_pressed();

    void on_DERECHA_pressed();

    void on_ATRAS_pressed();

    void on_F1_clicked();

    void on_F2_clicked();

    void on_F3_clicked();

    void on_F4_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
