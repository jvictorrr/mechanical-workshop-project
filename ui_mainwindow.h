/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *Page1;
    QLabel *label;
    QPushButton *confirmar1;
    QLineEdit *senha;
    QLineEdit *login;
    QRadioButton *opGerente;
    QRadioButton *opAtendente;
    QWidget *Page2;
    QLabel *label_4;
    QRadioButton *cad_cliente;
    QRadioButton *lista_clientes;
    QRadioButton *diag;
    QPushButton *confpg2;
    QPushButton *atenvoltar;
    QWidget *Page3;
    QLabel *label_3;
    QLineEdit *cli_nome;
    QLineEdit *cli_cpf;
    QLineEdit *cli_rg;
    QLineEdit *cli_contato;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *Page4;
    QLabel *label_5;
    QLineEdit *cli_carro;
    QLineEdit *car_marca;
    QLineEdit *car_placa;
    QLineEdit *car_ano;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QWidget *Page5;
    QLabel *label_9;
    QTableView *cli_cadastrados;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QWidget *Page6;
    QLabel *label_11;
    QCheckBox *checkBox3;
    QCheckBox *checkBox7;
    QCheckBox *checkBox5;
    QCheckBox *checkBox6;
    QCheckBox *checkBox4;
    QCheckBox *checkBox1;
    QCheckBox *checkBox2;
    QCheckBox *checkBox8;
    QCheckBox *checkBox9;
    QCheckBox *checkBox10;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QWidget *Page7;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_22;
    QPushButton *pushButton_17;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QTableView *tableView;
    QLabel *label_21;
    QWidget *Page8;
    QLabel *label_7;
    QRadioButton *cad_ate;
    QRadioButton *lista_ate;
    QRadioButton *mostra_est;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QWidget *Page9;
    QLabel *label_2;
    QLineEdit *at_nome;
    QLineEdit *at_cpf;
    QLineEdit *at_rg;
    QLineEdit *at_contato;
    QPushButton *gervoltar;
    QPushButton *pushButton_9;
    QWidget *Page10;
    QLabel *label_6;
    QLineEdit *at_login;
    QLineEdit *at_senha;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLineEdit *at_senha_confirmar;
    QWidget *Page11;
    QLabel *label_8;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QTableView *at_cadastrados;
    QWidget *Page12;
    QLabel *label_10;
    QPushButton *pushButton_14;
    QTableView *estoque;
    QWidget *page;
    QLabel *label_23;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(641, 411);
        MainWindow->setMinimumSize(QSize(641, 411));
        MainWindow->setMaximumSize(QSize(641, 411));
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 651, 411));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        Page1 = new QWidget();
        Page1->setObjectName(QStringLiteral("Page1"));
        Page1->setStyleSheet(QStringLiteral(""));
        label = new QLabel(Page1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 641, 411));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/layouts/Inicial geral.jpg);"));
        confirmar1 = new QPushButton(Page1);
        confirmar1->setObjectName(QStringLiteral("confirmar1"));
        confirmar1->setGeometry(QRect(510, 350, 111, 41));
        QFont font;
        font.setPointSize(12);
        confirmar1->setFont(font);
        confirmar1->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        senha = new QLineEdit(Page1);
        senha->setObjectName(QStringLiteral("senha"));
        senha->setGeometry(QRect(407, 230, 216, 24));
        senha->setTabletTracking(true);
        senha->setEchoMode(QLineEdit::Password);
        login = new QLineEdit(Page1);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(408, 196, 215, 21));
        login->setTabletTracking(false);
        opGerente = new QRadioButton(Page1);
        opGerente->setObjectName(QStringLiteral("opGerente"));
        opGerente->setGeometry(QRect(56, 299, 29, 16));
        opGerente->setFont(font);
        opAtendente = new QRadioButton(Page1);
        opAtendente->setObjectName(QStringLiteral("opAtendente"));
        opAtendente->setGeometry(QRect(56, 340, 16, 16));
        opAtendente->setFont(font);
        stackedWidget->addWidget(Page1);
        Page2 = new QWidget();
        Page2->setObjectName(QStringLiteral("Page2"));
        label_4 = new QLabel(Page2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 641, 411));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/layouts/Inicial atendente.jpg);"));
        cad_cliente = new QRadioButton(Page2);
        cad_cliente->setObjectName(QStringLiteral("cad_cliente"));
        cad_cliente->setGeometry(QRect(46, 149, 82, 17));
        lista_clientes = new QRadioButton(Page2);
        lista_clientes->setObjectName(QStringLiteral("lista_clientes"));
        lista_clientes->setGeometry(QRect(46, 187, 82, 17));
        diag = new QRadioButton(Page2);
        diag->setObjectName(QStringLiteral("diag"));
        diag->setGeometry(QRect(46, 222, 82, 17));
        confpg2 = new QPushButton(Page2);
        confpg2->setObjectName(QStringLiteral("confpg2"));
        confpg2->setGeometry(QRect(510, 350, 111, 41));
        confpg2->setFont(font);
        confpg2->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        atenvoltar = new QPushButton(Page2);
        atenvoltar->setObjectName(QStringLiteral("atenvoltar"));
        atenvoltar->setGeometry(QRect(20, 350, 111, 41));
        atenvoltar->setFont(font);
        atenvoltar->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        stackedWidget->addWidget(Page2);
        Page3 = new QWidget();
        Page3->setObjectName(QStringLiteral("Page3"));
        label_3 = new QLabel(Page3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 641, 411));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/layouts/op 1 - atendente.jpg);"));
        cli_nome = new QLineEdit(Page3);
        cli_nome->setObjectName(QStringLiteral("cli_nome"));
        cli_nome->setGeometry(QRect(104, 156, 216, 20));
        cli_cpf = new QLineEdit(Page3);
        cli_cpf->setObjectName(QStringLiteral("cli_cpf"));
        cli_cpf->setGeometry(QRect(107, 197, 212, 20));
        cli_rg = new QLineEdit(Page3);
        cli_rg->setObjectName(QStringLiteral("cli_rg"));
        cli_rg->setGeometry(QRect(107, 239, 210, 20));
        cli_contato = new QLineEdit(Page3);
        cli_contato->setObjectName(QStringLiteral("cli_contato"));
        cli_contato->setGeometry(QRect(105, 279, 211, 20));
        pushButton_2 = new QPushButton(Page3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 350, 111, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        pushButton = new QPushButton(Page3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 350, 111, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        stackedWidget->addWidget(Page3);
        Page4 = new QWidget();
        Page4->setObjectName(QStringLiteral("Page4"));
        label_5 = new QLabel(Page4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 641, 411));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/layouts/op 1.2 - atendente.jpg);"));
        cli_carro = new QLineEdit(Page4);
        cli_carro->setObjectName(QStringLiteral("cli_carro"));
        cli_carro->setGeometry(QRect(153, 155, 141, 20));
        car_marca = new QLineEdit(Page4);
        car_marca->setObjectName(QStringLiteral("car_marca"));
        car_marca->setGeometry(QRect(154, 196, 138, 20));
        car_placa = new QLineEdit(Page4);
        car_placa->setObjectName(QStringLiteral("car_placa"));
        car_placa->setGeometry(QRect(155, 239, 136, 20));
        car_ano = new QLineEdit(Page4);
        car_ano->setObjectName(QStringLiteral("car_ano"));
        car_ano->setGeometry(QRect(157, 279, 133, 20));
        pushButton_4 = new QPushButton(Page4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(510, 350, 111, 41));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        pushButton_3 = new QPushButton(Page4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 350, 121, 41));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        stackedWidget->addWidget(Page4);
        Page5 = new QWidget();
        Page5->setObjectName(QStringLiteral("Page5"));
        label_9 = new QLabel(Page5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 641, 411));
        label_9->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/layouts/Clientes cadastrados 2.jpg);"));
        cli_cadastrados = new QTableView(Page5);
        cli_cadastrados->setObjectName(QStringLiteral("cli_cadastrados"));
        cli_cadastrados->setGeometry(QRect(30, 80, 391, 261));
        pushButton_6 = new QPushButton(Page5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(510, 350, 121, 41));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        pushButton_5 = new QPushButton(Page5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 350, 121, 41));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        stackedWidget->addWidget(Page5);
        Page6 = new QWidget();
        Page6->setObjectName(QStringLiteral("Page6"));
        label_11 = new QLabel(Page6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 0, 641, 411));
        label_11->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/diag.jpg);"));
        checkBox3 = new QCheckBox(Page6);
        checkBox3->setObjectName(QStringLiteral("checkBox3"));
        checkBox3->setGeometry(QRect(44, 187, 68, 17));
        checkBox7 = new QCheckBox(Page6);
        checkBox7->setObjectName(QStringLiteral("checkBox7"));
        checkBox7->setGeometry(QRect(364, 157, 70, 17));
        checkBox5 = new QCheckBox(Page6);
        checkBox5->setObjectName(QStringLiteral("checkBox5"));
        checkBox5->setGeometry(QRect(44, 261, 70, 17));
        checkBox6 = new QCheckBox(Page6);
        checkBox6->setObjectName(QStringLiteral("checkBox6"));
        checkBox6->setGeometry(QRect(365, 124, 70, 17));
        checkBox4 = new QCheckBox(Page6);
        checkBox4->setObjectName(QStringLiteral("checkBox4"));
        checkBox4->setGeometry(QRect(43, 223, 70, 17));
        checkBox1 = new QCheckBox(Page6);
        checkBox1->setObjectName(QStringLiteral("checkBox1"));
        checkBox1->setGeometry(QRect(43, 125, 70, 17));
        checkBox1->setChecked(false);
        checkBox2 = new QCheckBox(Page6);
        checkBox2->setObjectName(QStringLiteral("checkBox2"));
        checkBox2->setGeometry(QRect(43, 154, 68, 17));
        checkBox8 = new QCheckBox(Page6);
        checkBox8->setObjectName(QStringLiteral("checkBox8"));
        checkBox8->setGeometry(QRect(365, 192, 70, 17));
        checkBox9 = new QCheckBox(Page6);
        checkBox9->setObjectName(QStringLiteral("checkBox9"));
        checkBox9->setGeometry(QRect(365, 230, 70, 17));
        checkBox10 = new QCheckBox(Page6);
        checkBox10->setObjectName(QStringLiteral("checkBox10"));
        checkBox10->setGeometry(QRect(364, 266, 70, 17));
        pushButton_15 = new QPushButton(Page6);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(20, 350, 121, 41));
        pushButton_15->setFont(font);
        pushButton_15->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        pushButton_16 = new QPushButton(Page6);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(500, 350, 121, 41));
        pushButton_16->setFont(font);
        pushButton_16->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        stackedWidget->addWidget(Page6);
        label_11->raise();
        checkBox3->raise();
        checkBox7->raise();
        checkBox5->raise();
        checkBox6->raise();
        checkBox4->raise();
        checkBox2->raise();
        checkBox1->raise();
        checkBox8->raise();
        checkBox9->raise();
        checkBox10->raise();
        pushButton_15->raise();
        pushButton_16->raise();
        Page7 = new QWidget();
        Page7->setObjectName(QStringLiteral("Page7"));
        layoutWidget = new QWidget(Page7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 145, 241, 256));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(label_13);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(label_14);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(label_15);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(label_16);

        label_22 = new QLabel(Page7);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(0, 0, 641, 411));
        label_22->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/vvv.jpg);"));
        pushButton_17 = new QPushButton(Page7);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(20, 350, 121, 41));
        pushButton_17->setFont(font);
        pushButton_17->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        label_17 = new QLabel(Page7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(360, 150, 219, 31));
        label_17->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        label_18 = new QLabel(Page7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(360, 180, 211, 31));
        label_18->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        label_19 = new QLabel(Page7);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(360, 220, 219, 31));
        label_19->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        label_20 = new QLabel(Page7);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(360, 260, 211, 31));
        label_20->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        tableView = new QTableView(Page7);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 130, 531, 221));
        label_21 = new QLabel(Page7);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(360, 300, 211, 31));
        label_21->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        stackedWidget->addWidget(Page7);
        label_22->raise();
        tableView->raise();
        layoutWidget->raise();
        pushButton_17->raise();
        label_17->raise();
        label_19->raise();
        label_18->raise();
        label_20->raise();
        label_21->raise();
        Page8 = new QWidget();
        Page8->setObjectName(QStringLiteral("Page8"));
        label_7 = new QLabel(Page8);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 0, 641, 411));
        label_7->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/layouts/Inicial gerente.jpg);"));
        cad_ate = new QRadioButton(Page8);
        cad_ate->setObjectName(QStringLiteral("cad_ate"));
        cad_ate->setGeometry(QRect(46, 149, 82, 17));
        lista_ate = new QRadioButton(Page8);
        lista_ate->setObjectName(QStringLiteral("lista_ate"));
        lista_ate->setGeometry(QRect(46, 187, 82, 17));
        mostra_est = new QRadioButton(Page8);
        mostra_est->setObjectName(QStringLiteral("mostra_est"));
        mostra_est->setGeometry(QRect(47, 222, 82, 17));
        pushButton_8 = new QPushButton(Page8);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(510, 350, 121, 41));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        pushButton_7 = new QPushButton(Page8);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 350, 121, 41));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        stackedWidget->addWidget(Page8);
        Page9 = new QWidget();
        Page9->setObjectName(QStringLiteral("Page9"));
        label_2 = new QLabel(Page9);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 641, 411));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/layouts/op 1 - gerente.jpg);"));
        at_nome = new QLineEdit(Page9);
        at_nome->setObjectName(QStringLiteral("at_nome"));
        at_nome->setGeometry(QRect(106, 157, 211, 20));
        at_cpf = new QLineEdit(Page9);
        at_cpf->setObjectName(QStringLiteral("at_cpf"));
        at_cpf->setGeometry(QRect(107, 197, 211, 20));
        at_rg = new QLineEdit(Page9);
        at_rg->setObjectName(QStringLiteral("at_rg"));
        at_rg->setGeometry(QRect(107, 238, 211, 20));
        at_contato = new QLineEdit(Page9);
        at_contato->setObjectName(QStringLiteral("at_contato"));
        at_contato->setGeometry(QRect(107, 279, 212, 20));
        gervoltar = new QPushButton(Page9);
        gervoltar->setObjectName(QStringLiteral("gervoltar"));
        gervoltar->setGeometry(QRect(20, 350, 121, 41));
        gervoltar->setFont(font);
        gervoltar->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        pushButton_9 = new QPushButton(Page9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(510, 350, 121, 41));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        stackedWidget->addWidget(Page9);
        Page10 = new QWidget();
        Page10->setObjectName(QStringLiteral("Page10"));
        label_6 = new QLabel(Page10);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 641, 411));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/piu.jpg);"));
        at_login = new QLineEdit(Page10);
        at_login->setObjectName(QStringLiteral("at_login"));
        at_login->setGeometry(QRect(175, 160, 211, 20));
        at_senha = new QLineEdit(Page10);
        at_senha->setObjectName(QStringLiteral("at_senha"));
        at_senha->setGeometry(QRect(174, 205, 211, 20));
        at_senha->setEchoMode(QLineEdit::Password);
        pushButton_10 = new QPushButton(Page10);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(510, 360, 121, 41));
        pushButton_10->setFont(font);
        pushButton_10->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        pushButton_11 = new QPushButton(Page10);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(20, 360, 121, 41));
        pushButton_11->setFont(font);
        pushButton_11->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        at_senha_confirmar = new QLineEdit(Page10);
        at_senha_confirmar->setObjectName(QStringLiteral("at_senha_confirmar"));
        at_senha_confirmar->setGeometry(QRect(172, 247, 211, 20));
        at_senha_confirmar->setEchoMode(QLineEdit::Password);
        stackedWidget->addWidget(Page10);
        Page11 = new QWidget();
        Page11->setObjectName(QStringLiteral("Page11"));
        label_8 = new QLabel(Page11);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 0, 641, 411));
        label_8->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/Atendentes cadastrados novo.jpg);"));
        pushButton_12 = new QPushButton(Page11);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(500, 350, 121, 41));
        pushButton_12->setFont(font);
        pushButton_12->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        pushButton_13 = new QPushButton(Page11);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 350, 121, 41));
        pushButton_13->setFont(font);
        pushButton_13->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        at_cadastrados = new QTableView(Page11);
        at_cadastrados->setObjectName(QStringLiteral("at_cadastrados"));
        at_cadastrados->setGeometry(QRect(30, 80, 371, 261));
        stackedWidget->addWidget(Page11);
        label_8->raise();
        pushButton_13->raise();
        at_cadastrados->raise();
        pushButton_12->raise();
        Page12 = new QWidget();
        Page12->setObjectName(QStringLiteral("Page12"));
        label_10 = new QLabel(Page12);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 641, 411));
        label_10->setStyleSheet(QStringLiteral("border-image: url(:/Desktop/Estoque  novo.jpg);"));
        pushButton_14 = new QPushButton(Page12);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(20, 350, 121, 41));
        pushButton_14->setFont(font);
        pushButton_14->setStyleSheet(QStringLiteral("QPushButton {background: transparent;}rgb(255, 255, 255)"));
        estoque = new QTableView(Page12);
        estoque->setObjectName(QStringLiteral("estoque"));
        estoque->setGeometry(QRect(160, 120, 321, 221));
        stackedWidget->addWidget(Page12);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_23 = new QLabel(page);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(180, 170, 51, 16));
        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p><p><br/></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        confirmar1->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        confirmar1->setText(QString());
        opGerente->setText(QString());
#ifndef QT_NO_WHATSTHIS
        opAtendente->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        opAtendente->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p><p><br/></p></body></html>", nullptr));
        cad_cliente->setText(QString());
        lista_clientes->setText(QString());
        diag->setText(QString());
#ifndef QT_NO_TOOLTIP
        confpg2->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        confpg2->setText(QString());
#ifndef QT_NO_TOOLTIP
        atenvoltar->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        atenvoltar->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
        label_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QString());
        label_9->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QString());
        label_11->setText(QString());
        checkBox3->setText(QString());
        checkBox7->setText(QString());
        checkBox5->setText(QString());
        checkBox6->setText(QString());
        checkBox4->setText(QString());
        checkBox1->setText(QString());
        checkBox2->setText(QString());
        checkBox8->setText(QString());
        checkBox9->setText(QString());
        checkBox10->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_15->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_15->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_16->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_16->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_22->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_17->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_17->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QString());
        cad_ate->setText(QString());
        lista_ate->setText(QString());
        mostra_est->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_7->setText(QString());
        label_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        gervoltar->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        gervoltar->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_9->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_9->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_10->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_10->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_11->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_11->setText(QString());
        label_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_12->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_12->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_13->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_13->setText(QString());
        label_10->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_14->setToolTip(QApplication::translate("MainWindow", "QPushButton {background: transparent;}", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_14->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
