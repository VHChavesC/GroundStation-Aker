#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <comserial.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTime fixo;
    QTime timer;
    QTimer *temporizador;
    // i, j e k são variáveis para o timer, modoAtual guarda o atributo de modo de vôo, o iterador serve para colocar as informações que chegam via serial dentro do campo certo, assim como o resto.
    int i ,j ,k, modoAtual, iterador, resto;
    bool StartStop = false;

private slots:

    void atualiza();

    void on_btnStartStop_clicked();

    void on_Modo1_clicked();

    void on_Modo2_clicked();

    void on_Modo3_clicked();

    void on_Modo4_clicked();

    void on_Modo5_clicked();

    void on_Modo6_clicked();

    void on_Modo7_clicked();

    void on_Modo8_clicked();

    void on_Modo9_clicked();

    void WriteData(const QByteArray data);

    void ReadData();

    void on_pbConnect_clicked();

    void on_pbDesconnect_clicked();

private:
    Ui::MainWindow *ui;

    QSerialPort *devserial;
    comserial *procSerial;
};

#endif // MAINWINDOW_H
