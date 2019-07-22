#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include <QTime>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Temporizador para atualizar a cada mil miliseguindos os dados da interface
    this->temporizador = new QTimer(this);
    connect(temporizador, SIGNAL(timeout()), this , SLOT(atualiza()));
    temporizador->start(1000);

    //Relógio para obter a hora do sistema sempre que necessário
    this->timer.start();

    //Zerando as variáveis do contador de tempo
    this->i = 0; this->j = 0; this->k = 0;

    //Zerando a variável de modo de vôo
    this->modoAtual = 0;

    //Zerando o iterador da comunicação serial:
    this->iterador = 0;
    this->resto = 0;

    //Lançamento de interface
    ui->setupUi(this);
    this->ui->btnStartStop->setText("Start");

    //Apartir daqui é tudo para a comunicação serial:

    // Create Object the Class QSerialPort
    devserial = new QSerialPort(this);

    // Create Object the Class comserial to manipulate read/write of the my way
    procSerial = new comserial(devserial);

    // Load Device PortSerial available
    QStringList DispSeriais = procSerial->CarregarDispositivos();

    // Inserting in ComboxBox the Devices
    ui->cbPort->addItems(DispSeriais);

    /* Enable PushButton "Conectar" if any port is found.
            * If an error occurs, it is reported in the Log
            */
    if(DispSeriais.length() > 0) {
        ui->pbConnect->setEnabled(true);
        ui->tDisplay->append("### Porta serial pronta para ser utilizada.");
    }
    else { ui->tDisplay->append("### Nenhuma porta serial foi detectada!"); }


    /* Connect Objects -> Signal and Slots
            * DevSerial with Read Data Serial
            * TextEdit "teLog" with getData() after send data WriteData() [Not apply here in version 5.X]
            */
    connect(devserial, SIGNAL(readyRead()), this, SLOT(ReadData()));
    //connect(ui->teLog, SIGNAL(getData(QByteArray)), this, SLOT(WriteData(QByteArray)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnStartStop_clicked()
{
    this->StartStop = !this->StartStop;
    if(this->StartStop){
        this->ui->btnStartStop->setText("Stop");
        qDebug() << QString("Cronômetro Rodando");
    }
    else{
        this->ui->btnStartStop->setText("Start");
        qDebug() << QString("Cronômetro Pausado");
    }

}

void MainWindow::atualiza()
{

    //Lógica do Start/Stop do cronômetro
    if(this->StartStop){


        //Atualização dos parâmetros do contador de tempo de missão
        this->i++;
        if(this->i==60){
            this->i = 0;
            this->j++;
        };
        if(this->j==60){
            this->j = 0;
            this->k++;
        };
        if(k==24){
            this->k = 0;
            qDebug() << QString("Fudeu");
        };

        //Lógica para a adição do 00:00 ou 0:0
        if(this->i < 10){
            ui->vSeg->setText('0' + QString::number(this->i));
        }
        else
            ui->vSeg->setNum(this->i);

        if(this->j <10){
            ui->vMin->setText('0' + QString::number(this->j));
        }
        else
            ui->vMin->setNum(this->j);

        if(this->k < 10){
            ui->vHora->setText('0' + QString::number(this->k));
        }
        else
            ui->vHora->setNum(this->k);
    }

}

void MainWindow::on_Modo1_clicked()
{
    this->modoAtual = 1;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 1.");
}

void MainWindow::on_Modo2_clicked()
{
    this->modoAtual = 2;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 2.");
}

void MainWindow::on_Modo3_clicked()
{
    this->modoAtual = 3;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 3.");
}

void MainWindow::on_Modo4_clicked()
{
    this->modoAtual = 4;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 4.");
}

void MainWindow::on_Modo5_clicked()
{
    this->modoAtual = 5;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 5.");
}

void MainWindow::on_Modo6_clicked()
{
    this->modoAtual = 6;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 6.");
}

void MainWindow::on_Modo7_clicked()
{
    this->modoAtual = 7;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 7.");
}

void MainWindow::on_Modo8_clicked()
{
    this->modoAtual = 8;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 8.");
}

void MainWindow::on_Modo9_clicked()
{
    this->modoAtual = 9;
    this->ui->vModo->setNum(modoAtual);
    qDebug() << QString("Modo de Vôo alterado para 9.");
}

void MainWindow::WriteData(const QByteArray data){
    procSerial->Write(data);
}

void MainWindow::ReadData(){

    QByteArray datas = devserial->readLine();
    QString data2 = "";
    if (datas.size() == 0) {
        qDebug() << "Arrived data: 0";
    } else {
        for (int i = 0; i < datas.size(); i++){
            if(datas[i] == '\n'){
                break;
            }
            if (datas.at(i)) {
                if(datas[i] == '\r') break;
                data2 += datas[i];
            }
        }
        qDebug() << data2;

        resto = iterador % 17;

        switch(resto){
        case 0:
            //Generating Data Default String
            break;
        case 1:
            ui->vModo->setText(data2);
            //Modo de vôo
            break;
        case 2:
            if(data2 == 1)
                ui->vValid->pressed();
            else
                ui->vValid->released();
            //Validade do GPS
            break;
        case 3:
            ui->vLat->setText(data2);
            //Latitude
            break;
        case 4:
            ui->vLong->setText(data2);
            //Longitude
            break;
        case 5:
            //Horizontal Dilution of Precision
            break;
        case 6:
            //Quantos Satélites
            break;
        case 7:
            ui->vAltitudeGPS->setText(data2);
            //Altitude GPS
            break;
        case 8:
            //Orientação GPS
            break;
        case 9:
            ui->vVeloGPS->setText(data2);
            //Velocidade GPS
            break;
        case 10:
            ui->vTempBMP->setText(data2);
            //Temperatura BMP
            break;
        case 11:
            ui->vAltitudeBMP->setText(data2);
            //Altitude BMP
            break;
        case 12:
            ui->vPressBMP->setText(data2);
            //Pressão BMP
            break;
        case 13:
           //Validade SD
            break;
        case 14:
            ui->vVeloBMP->setText(data2);
            //Velocidade Barômetro
            break;
        case 15:
            // Is Open (?)
            break;
        case 16:
            //checksum
            break;
        default:
            qDebug() << "Valor Inválido";

        }
        iterador++;
        //ui->tDisplay->append(data2);
    }


}

void MainWindow::on_pbConnect_clicked(){
    bool statusOpenSerial;

    statusOpenSerial = procSerial->Conectar(ui->cbPort->currentText(),
                                            ui->cbBaud->currentText().toInt()
                                            );
    if (statusOpenSerial) {
        ui->pbDesconnect->setEnabled(true);
        ui->pbConnect->setEnabled(false);
        ui->tDisplay->append("### Porta serial aberta com sucesso!");
    }
    else {
        ui->tDisplay->append("Falha ao abrir conexão serial.");
    }
}

void MainWindow::on_pbDesconnect_clicked(){
    bool statusCloseSerial;


    statusCloseSerial = procSerial->Desconectar();

    /* BUG: Existe um bug no close do QtSerialPort, já conhecido pela comunidade onde
         * quando usado com waitForReadyRead, da um erro 12 Timeout no SerialPort e não encerra a conexão
         * porém é reportado o erro mas o device é encerrado.
         * Para contornar o problema no Desconectar eu verifiquei com isOpen logo apos fechar a conexão
         * serial.
         */

    if (statusCloseSerial) {
        ui->pbDesconnect->setEnabled(false);
        ui->pbConnect->setEnabled(true);
        ui->tDisplay->append("### Porta serial fechada com sucesso!");
    }
    else {
        ui->tDisplay->append("### Falha ao fechar conexão serial.");
    }
}
