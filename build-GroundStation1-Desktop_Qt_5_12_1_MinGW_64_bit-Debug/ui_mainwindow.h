/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *tModosdeVoo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_13;
    QLabel *tModoAtual;
    QLabel *vModo;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *Modo1;
    QPushButton *Modo3;
    QPushButton *Modo9;
    QPushButton *Modo2;
    QPushButton *Modo8;
    QPushButton *Modo4;
    QPushButton *Modo5;
    QPushButton *Modo6;
    QPushButton *Modo7;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *tStatusDaMissao;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *tLocalizacao;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *tAltitudeBMP;
    QLabel *vAltitudeBMP;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QLabel *tAltitudeGPS;
    QLabel *vAltitudeGPS;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *tLatitude;
    QLabel *vLat;
    QSpacerItem *horizontalSpacer_12;
    QRadioButton *vValid;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *tLongitude;
    QLabel *vLong;
    QHBoxLayout *horizontalLayout_18;
    QLabel *tVelocidadeGPS;
    QLabel *vVeloGPS;
    QHBoxLayout *horizontalLayout_17;
    QLabel *tVeloBMP;
    QLabel *vVeloBMP;
    QHBoxLayout *horizontalLayout_8;
    QLabel *tTemperaturaInterna;
    QLabel *vTempBMP;
    QHBoxLayout *horizontalLayout_19;
    QLabel *tPressao;
    QLabel *vPressBMP;
    QHBoxLayout *horizontalLayout_9;
    QLabel *tNiveldasBaterias;
    QProgressBar *vBat;
    QHBoxLayout *horizontalLayout_12;
    QLabel *tTempoDeMissao;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_20;
    QLabel *vHora;
    QLabel *label_2;
    QLabel *vMin;
    QLabel *label_4;
    QLabel *vSeg;
    QPushButton *btnStartStop;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QLabel *tTelecomando;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *tComando;
    QLineEdit *vComando;
    QPushButton *btnSend;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    QLabel *tComunication;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *tDisplay;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_21;
    QLabel *tPorta;
    QComboBox *cbPort;
    QHBoxLayout *horizontalLayout_22;
    QLabel *tBaudRate;
    QComboBox *cbBaud;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *pbConnect;
    QPushButton *pbDesconnect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1289, 583);
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto Black"));
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Z.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(46,52,54)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1010, 430, 211, 101));
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8("../Logo White.png")));
        label->setScaledContents(true);
        label->setIndent(-4);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 421, 411));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tModosdeVoo = new QLabel(layoutWidget);
        tModosdeVoo->setObjectName(QString::fromUtf8("tModosdeVoo"));
        tModosdeVoo->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        tModosdeVoo->setFont(font1);
        tModosdeVoo->setStyleSheet(QString::fromUtf8("font:24pt\"Courier 10 Pitch\";\n"
"color:rgb(238,238,236);"));

        horizontalLayout_2->addWidget(tModosdeVoo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        tModoAtual = new QLabel(layoutWidget);
        tModoAtual->setObjectName(QString::fromUtf8("tModoAtual"));
        tModoAtual->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_13->addWidget(tModoAtual);

        vModo = new QLabel(layoutWidget);
        vModo->setObjectName(QString::fromUtf8("vModo"));
        vModo->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_13->addWidget(vModo);


        verticalLayout_2->addLayout(horizontalLayout_13);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        Modo1 = new QPushButton(layoutWidget);
        Modo1->setObjectName(QString::fromUtf8("Modo1"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        Modo1->setFont(font2);
        Modo1->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo1, 0, 0, 1, 1);

        Modo3 = new QPushButton(layoutWidget);
        Modo3->setObjectName(QString::fromUtf8("Modo3"));
        Modo3->setFont(font2);
        Modo3->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo3, 0, 2, 1, 1);

        Modo9 = new QPushButton(layoutWidget);
        Modo9->setObjectName(QString::fromUtf8("Modo9"));
        Modo9->setFont(font2);
        Modo9->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo9, 2, 2, 1, 1);

        Modo2 = new QPushButton(layoutWidget);
        Modo2->setObjectName(QString::fromUtf8("Modo2"));
        Modo2->setFont(font2);
        Modo2->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo2, 0, 1, 1, 1);

        Modo8 = new QPushButton(layoutWidget);
        Modo8->setObjectName(QString::fromUtf8("Modo8"));
        Modo8->setFont(font2);
        Modo8->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo8, 2, 1, 1, 1);

        Modo4 = new QPushButton(layoutWidget);
        Modo4->setObjectName(QString::fromUtf8("Modo4"));
        Modo4->setFont(font2);
        Modo4->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo4, 1, 0, 1, 1);

        Modo5 = new QPushButton(layoutWidget);
        Modo5->setObjectName(QString::fromUtf8("Modo5"));
        Modo5->setFont(font2);
        Modo5->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo5, 1, 1, 1, 1);

        Modo6 = new QPushButton(layoutWidget);
        Modo6->setObjectName(QString::fromUtf8("Modo6"));
        Modo6->setFont(font2);
        Modo6->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo6, 1, 2, 1, 1);

        Modo7 = new QPushButton(layoutWidget);
        Modo7->setObjectName(QString::fromUtf8("Modo7"));
        Modo7->setFont(font2);
        Modo7->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        gridLayout->addWidget(Modo7, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(440, 10, 437, 411));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        tStatusDaMissao = new QLabel(layoutWidget1);
        tStatusDaMissao->setObjectName(QString::fromUtf8("tStatusDaMissao"));
        tStatusDaMissao->setFont(font1);
        tStatusDaMissao->setStyleSheet(QString::fromUtf8("font:24pt\"Courier 10 Pitch\";\n"
"color:rgb(238,238,236);"));

        horizontalLayout->addWidget(tStatusDaMissao);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        tLocalizacao = new QLabel(layoutWidget1);
        tLocalizacao->setObjectName(QString::fromUtf8("tLocalizacao"));
        tLocalizacao->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_7->addWidget(tLocalizacao);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        tAltitudeBMP = new QLabel(layoutWidget1);
        tAltitudeBMP->setObjectName(QString::fromUtf8("tAltitudeBMP"));
        tAltitudeBMP->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_14->addWidget(tAltitudeBMP);

        vAltitudeBMP = new QLabel(layoutWidget1);
        vAltitudeBMP->setObjectName(QString::fromUtf8("vAltitudeBMP"));
        vAltitudeBMP->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_14->addWidget(vAltitudeBMP);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_10);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        tAltitudeGPS = new QLabel(layoutWidget1);
        tAltitudeGPS->setObjectName(QString::fromUtf8("tAltitudeGPS"));
        tAltitudeGPS->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_14->addWidget(tAltitudeGPS);

        vAltitudeGPS = new QLabel(layoutWidget1);
        vAltitudeGPS->setObjectName(QString::fromUtf8("vAltitudeGPS"));
        vAltitudeGPS->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_14->addWidget(vAltitudeGPS);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tLatitude = new QLabel(layoutWidget1);
        tLatitude->setObjectName(QString::fromUtf8("tLatitude"));

        horizontalLayout_4->addWidget(tLatitude);

        vLat = new QLabel(layoutWidget1);
        vLat->setObjectName(QString::fromUtf8("vLat"));

        horizontalLayout_4->addWidget(vLat);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        vValid = new QRadioButton(layoutWidget1);
        vValid->setObjectName(QString::fromUtf8("vValid"));
        vValid->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_6->addWidget(vValid);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        tLongitude = new QLabel(layoutWidget1);
        tLongitude->setObjectName(QString::fromUtf8("tLongitude"));

        horizontalLayout_5->addWidget(tLongitude);

        vLong = new QLabel(layoutWidget1);
        vLong->setObjectName(QString::fromUtf8("vLong"));

        horizontalLayout_5->addWidget(vLong);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        tVelocidadeGPS = new QLabel(layoutWidget1);
        tVelocidadeGPS->setObjectName(QString::fromUtf8("tVelocidadeGPS"));
        tVelocidadeGPS->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_18->addWidget(tVelocidadeGPS);

        vVeloGPS = new QLabel(layoutWidget1);
        vVeloGPS->setObjectName(QString::fromUtf8("vVeloGPS"));
        vVeloGPS->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_18->addWidget(vVeloGPS);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        tVeloBMP = new QLabel(layoutWidget1);
        tVeloBMP->setObjectName(QString::fromUtf8("tVeloBMP"));
        tVeloBMP->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_17->addWidget(tVeloBMP);

        vVeloBMP = new QLabel(layoutWidget1);
        vVeloBMP->setObjectName(QString::fromUtf8("vVeloBMP"));
        vVeloBMP->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_17->addWidget(vVeloBMP);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        tTemperaturaInterna = new QLabel(layoutWidget1);
        tTemperaturaInterna->setObjectName(QString::fromUtf8("tTemperaturaInterna"));
        tTemperaturaInterna->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_8->addWidget(tTemperaturaInterna);

        vTempBMP = new QLabel(layoutWidget1);
        vTempBMP->setObjectName(QString::fromUtf8("vTempBMP"));
        vTempBMP->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_8->addWidget(vTempBMP);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        tPressao = new QLabel(layoutWidget1);
        tPressao->setObjectName(QString::fromUtf8("tPressao"));
        tPressao->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_19->addWidget(tPressao);

        vPressBMP = new QLabel(layoutWidget1);
        vPressBMP->setObjectName(QString::fromUtf8("vPressBMP"));
        vPressBMP->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_19->addWidget(vPressBMP);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        tNiveldasBaterias = new QLabel(layoutWidget1);
        tNiveldasBaterias->setObjectName(QString::fromUtf8("tNiveldasBaterias"));
        tNiveldasBaterias->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_9->addWidget(tNiveldasBaterias);

        vBat = new QProgressBar(layoutWidget1);
        vBat->setObjectName(QString::fromUtf8("vBat"));
        vBat->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));
        vBat->setValue(50);

        horizontalLayout_9->addWidget(vBat);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        tTempoDeMissao = new QLabel(layoutWidget1);
        tTempoDeMissao->setObjectName(QString::fromUtf8("tTempoDeMissao"));
        tTempoDeMissao->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_12->addWidget(tTempoDeMissao);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        vHora = new QLabel(layoutWidget1);
        vHora->setObjectName(QString::fromUtf8("vHora"));
        vHora->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_20->addWidget(vHora);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_20->addWidget(label_2);

        vMin = new QLabel(layoutWidget1);
        vMin->setObjectName(QString::fromUtf8("vMin"));
        vMin->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_20->addWidget(vMin);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_20->addWidget(label_4);

        vSeg = new QLabel(layoutWidget1);
        vSeg->setObjectName(QString::fromUtf8("vSeg"));
        vSeg->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_20->addWidget(vSeg);


        horizontalLayout_15->addLayout(horizontalLayout_20);


        horizontalLayout_16->addLayout(horizontalLayout_15);

        btnStartStop = new QPushButton(layoutWidget1);
        btnStartStop->setObjectName(QString::fromUtf8("btnStartStop"));
        btnStartStop->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        horizontalLayout_16->addWidget(btnStartStop);


        horizontalLayout_12->addLayout(horizontalLayout_16);


        verticalLayout_3->addLayout(horizontalLayout_12);


        verticalLayout_4->addLayout(verticalLayout_3);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 430, 421, 98));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        tTelecomando = new QLabel(layoutWidget2);
        tTelecomando->setObjectName(QString::fromUtf8("tTelecomando"));
        tTelecomando->setFont(font1);
        tTelecomando->setStyleSheet(QString::fromUtf8("font:24pt\"Courier 10 Pitch\";\n"
"color:rgb(238,238,236);"));

        horizontalLayout_10->addWidget(tTelecomando);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        tComando = new QLabel(layoutWidget2);
        tComando->setObjectName(QString::fromUtf8("tComando"));
        tComando->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_11->addWidget(tComando);

        vComando = new QLineEdit(layoutWidget2);
        vComando->setObjectName(QString::fromUtf8("vComando"));

        horizontalLayout_11->addWidget(vComando);

        btnSend = new QPushButton(layoutWidget2);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        horizontalLayout_11->addWidget(btnSend);


        verticalLayout_5->addLayout(horizontalLayout_11);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(890, 10, 344, 411));
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        tComunication = new QLabel(widget);
        tComunication->setObjectName(QString::fromUtf8("tComunication"));
        tComunication->setFont(font1);
        tComunication->setStyleSheet(QString::fromUtf8("font:24pt\"Courier 10 Pitch\";\n"
"color:rgb(238,238,236);"));

        verticalLayout_7->addWidget(tComunication);

        verticalSpacer_3 = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        tDisplay = new QTextEdit(widget);
        tDisplay->setObjectName(QString::fromUtf8("tDisplay"));
        tDisplay->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        verticalLayout_7->addWidget(tDisplay);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        tPorta = new QLabel(widget);
        tPorta->setObjectName(QString::fromUtf8("tPorta"));
        tPorta->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_21->addWidget(tPorta);

        cbPort = new QComboBox(widget);
        cbPort->setObjectName(QString::fromUtf8("cbPort"));
        cbPort->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        horizontalLayout_21->addWidget(cbPort);


        verticalLayout_6->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        tBaudRate = new QLabel(widget);
        tBaudRate->setObjectName(QString::fromUtf8("tBaudRate"));
        tBaudRate->setStyleSheet(QString::fromUtf8("color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
""));

        horizontalLayout_22->addWidget(tBaudRate);

        cbBaud = new QComboBox(widget);
        cbBaud->addItem(QString());
        cbBaud->addItem(QString());
        cbBaud->addItem(QString());
        cbBaud->addItem(QString());
        cbBaud->addItem(QString());
        cbBaud->setObjectName(QString::fromUtf8("cbBaud"));
        cbBaud->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        horizontalLayout_22->addWidget(cbBaud);


        verticalLayout_6->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        pbConnect = new QPushButton(widget);
        pbConnect->setObjectName(QString::fromUtf8("pbConnect"));
        pbConnect->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        horizontalLayout_23->addWidget(pbConnect);

        pbDesconnect = new QPushButton(widget);
        pbDesconnect->setObjectName(QString::fromUtf8("pbDesconnect"));
        pbDesconnect->setStyleSheet(QString::fromUtf8("background-color: rgb(85,87,83);\n"
"color:rgb(238,238,236);\n"
"font:14pt\"Courier 10 Pitch\";\n"
"alternate-background-color:rgb(136,138,133);\n"
"border-right-color:rgb(0,0,0);\n"
"border-bottom-color:rgb(0,0,0);"));

        horizontalLayout_23->addWidget(pbDesconnect);


        verticalLayout_6->addLayout(horizontalLayout_23);


        verticalLayout_7->addLayout(verticalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1289, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        QWidget::setTabOrder(Modo1, Modo2);
        QWidget::setTabOrder(Modo2, Modo3);
        QWidget::setTabOrder(Modo3, Modo4);
        QWidget::setTabOrder(Modo4, Modo5);
        QWidget::setTabOrder(Modo5, Modo6);
        QWidget::setTabOrder(Modo6, Modo7);
        QWidget::setTabOrder(Modo7, Modo8);
        QWidget::setTabOrder(Modo8, Modo9);
        QWidget::setTabOrder(Modo9, vComando);
        QWidget::setTabOrder(vComando, btnSend);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mission Monitor MVP", nullptr));
        label->setText(QString());
        tModosdeVoo->setText(QApplication::translate("MainWindow", "Modos de V\303\264o", nullptr));
        tModoAtual->setText(QApplication::translate("MainWindow", "Modo Atual:", nullptr));
        vModo->setText(QApplication::translate("MainWindow", "vModo", nullptr));
        Modo1->setText(QApplication::translate("MainWindow", "Modo 1", nullptr));
        Modo3->setText(QApplication::translate("MainWindow", "Modo 3", nullptr));
        Modo9->setText(QApplication::translate("MainWindow", "Modo 9", nullptr));
        Modo2->setText(QApplication::translate("MainWindow", "Modo 2", nullptr));
        Modo8->setText(QApplication::translate("MainWindow", "Modo 8", nullptr));
        Modo4->setText(QApplication::translate("MainWindow", "Modo 4", nullptr));
        Modo5->setText(QApplication::translate("MainWindow", "Modo 5", nullptr));
        Modo6->setText(QApplication::translate("MainWindow", "Modo 6", nullptr));
        Modo7->setText(QApplication::translate("MainWindow", "Modo 7", nullptr));
        tStatusDaMissao->setText(QApplication::translate("MainWindow", "Status da Miss\303\243o", nullptr));
        tLocalizacao->setText(QApplication::translate("MainWindow", "Localiza\303\247\303\243o (GPS)", nullptr));
        tAltitudeBMP->setText(QApplication::translate("MainWindow", "Altitude (Bar\303\264metro):", nullptr));
        vAltitudeBMP->setText(QApplication::translate("MainWindow", "vAltitudeBMP", nullptr));
        tAltitudeGPS->setText(QApplication::translate("MainWindow", "Altitude (GPS): ", nullptr));
        vAltitudeGPS->setText(QApplication::translate("MainWindow", "vAltitudeGPS", nullptr));
        tLatitude->setStyleSheet(QApplication::translate("MainWindow", "color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
"", nullptr));
        tLatitude->setText(QApplication::translate("MainWindow", "Latitude", nullptr));
        vLat->setStyleSheet(QApplication::translate("MainWindow", "color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
"", nullptr));
        vLat->setText(QApplication::translate("MainWindow", "vLat", nullptr));
        vValid->setText(QApplication::translate("MainWindow", "Validade", nullptr));
        tLongitude->setStyleSheet(QApplication::translate("MainWindow", "color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
"", nullptr));
        tLongitude->setText(QApplication::translate("MainWindow", "Longitude", nullptr));
        vLong->setStyleSheet(QApplication::translate("MainWindow", "color:rgb(186,189,182);\n"
"background-color:rgb(46,52,54);\n"
"alternate-background-color:rgb(85,87,83);\n"
"border-color:rgb(46,52,54);\n"
"", nullptr));
        vLong->setText(QApplication::translate("MainWindow", "vLong", nullptr));
        tVelocidadeGPS->setText(QApplication::translate("MainWindow", "Velocidade (GPS):", nullptr));
        vVeloGPS->setText(QApplication::translate("MainWindow", "vVeloGPS", nullptr));
        tVeloBMP->setText(QApplication::translate("MainWindow", "Velocidade (BMP):", nullptr));
        vVeloBMP->setText(QApplication::translate("MainWindow", "vVeloBMP", nullptr));
        tTemperaturaInterna->setText(QApplication::translate("MainWindow", "Temperatura Interna:", nullptr));
        vTempBMP->setText(QApplication::translate("MainWindow", "vTempBMP", nullptr));
        tPressao->setText(QApplication::translate("MainWindow", "Press\303\243o:", nullptr));
        vPressBMP->setText(QApplication::translate("MainWindow", "vPressBMP", nullptr));
        tNiveldasBaterias->setText(QApplication::translate("MainWindow", "N\303\255vel das baterias:", nullptr));
        tTempoDeMissao->setText(QApplication::translate("MainWindow", "Tempo de miss\303\243o:", nullptr));
        vHora->setText(QApplication::translate("MainWindow", "00", nullptr));
        label_2->setText(QApplication::translate("MainWindow", ":", nullptr));
        vMin->setText(QApplication::translate("MainWindow", "00", nullptr));
        label_4->setText(QApplication::translate("MainWindow", ":", nullptr));
        vSeg->setText(QApplication::translate("MainWindow", "00", nullptr));
        btnStartStop->setText(QApplication::translate("MainWindow", "Start/Stop", nullptr));
        tTelecomando->setText(QApplication::translate("MainWindow", "Telecomando", nullptr));
        tComando->setText(QApplication::translate("MainWindow", "Comando:", nullptr));
        btnSend->setText(QApplication::translate("MainWindow", "Enviar", nullptr));
        tComunication->setText(QApplication::translate("MainWindow", "Comunica\303\247\303\243o Serial", nullptr));
        tPorta->setText(QApplication::translate("MainWindow", "Porta:", nullptr));
        tBaudRate->setText(QApplication::translate("MainWindow", "BaudRate:", nullptr));
        cbBaud->setItemText(0, QApplication::translate("MainWindow", "2400", nullptr));
        cbBaud->setItemText(1, QApplication::translate("MainWindow", "4800", nullptr));
        cbBaud->setItemText(2, QApplication::translate("MainWindow", "9600", nullptr));
        cbBaud->setItemText(3, QApplication::translate("MainWindow", "19200", nullptr));
        cbBaud->setItemText(4, QApplication::translate("MainWindow", "115200", nullptr));

        pbConnect->setText(QApplication::translate("MainWindow", "Conectar", nullptr));
        pbDesconnect->setText(QApplication::translate("MainWindow", "Desconectar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
