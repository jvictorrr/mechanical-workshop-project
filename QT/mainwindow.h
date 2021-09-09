#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <cstring>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include <iostream>
#include"dialog.h"
#include <exception>
#include<stdexcept>

using namespace std;
class Cliente;
class Pessoa
{

    protected:

        QString nome;
        int cpf;
        int rg;

    public:

        Pessoa(){}
        Pessoa(QString n, int c, int r): nome(n), cpf(c), rg(r) {}
        virtual QString retornaNome();
        virtual int retornaCpf();
        virtual int retornaRg();
};

class Dono;
class Funcionario : public Pessoa
{
    friend class Dono;

    protected:

        int quantidade;
        QString login;
        QString senha;
        int contato;

    public:
        Funcionario(){}
        Funcionario(QString nome,int cpf,int rg,QString login, QString senha, int contato){
            this->login = login;
            this->senha = senha;
            this->contato = contato;
            }
        virtual QString retornaLogin(){
            return login;
        }
        virtual QString retornaSenha(){
            return senha;
        }
        virtual int retornaContato(){
            return contato;
        }

};

class Dono : public Pessoa
{
    friend class Funcionario;

    public:

         void quantidadeFuncionarios(Funcionario &obj_aux);
};

class Cliente;
class Veiculo;

class Atendente : public Funcionario
{
    friend class Veiculo;

    public:
         Atendente(QString nome,int cpf,int rg,int contato,QString login,QString senha){
            this->nome=nome;
             this->cpf=cpf;
             this->rg=rg;
             this->contato=contato;
             this->login=login;
             this->senha=senha;
         }
        void cadastroCliente(Cliente &obj_aux);
        void cadastroVeiculo(Veiculo &obj);
        void diagnosticoRapido();
        void removerCliente();

};

class Estoque;
class Gerente : public Funcionario
{
   public:
        void realizar_login();
        void cadastroAtendente(Atendente &obj_aux);
        void retiraEstoque(Estoque &obj_aux);
        void adicionaEstoque(Estoque &obj_aux);
        void limpaCampos();
};

class Estoque
{
    int bateria, amortecedor, bobina, cambio, direcao, embreagem, freios;
    int ingnicao, luzes, motor, vela, pistao, corrente, pneus;

    public:

    Estoque(){}
     void AdicionaEstoque();
     void atualizaEstoque(int bateria,int amortecedor,int bobina,int cambio,int direcao,int embreagem,int freios,int ingnicao,int luzes,int motor, int vela,int pistao,int corrente,int pneus){
         this->bateria=bateria;
         this->amortecedor=amortecedor;
         this->bobina=bobina;
         this->cambio=cambio;
         this->direcao=direcao;
         this->embreagem=embreagem;
         this->freios=freios;
         this->ingnicao=ingnicao;
         this->luzes=luzes;
         this->vela=vela;
         this->pistao=pistao;
         this->corrente=corrente;
         this->pneus=pneus;
     }
};

class Cliente
{
    QString nome;
    int cpf;
    int rg;
    int contato;
    public:

        Cliente(QString nom, int cp, int rg,int contato){nome = nom; cpf = cp;this->rg = rg;this->contato=contato;}
        QString retornaNome();
        int retornaCpf();
        int retornaRg();
        int retornaContato();
};
class Veiculo
{

    QString carro;
    QString marca;
    QString placa;
    int ano;
    QString bateria, amortecedor, bobina, cambio, direcao, embreagem, freios;
    QString luzes, motor, vela, corrente, pneus;

    public:

        Veiculo(QString noo, QString marc, QString plac, int an){carro = noo; marca = marc; placa = plac; ano = an;}
        QString retornaCarro();
        QString retornaMarca();
        QString retornaPlaca();
        int retornaAno();
};

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
    QDialog *apont;


public:
    Estoque armazem;
    QSqlDatabase db;
    void conClose();
    bool conOpen();


public:
friend class Gerente;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
 void setupTable();
 void setupTable2();
 void setupTable3();
 void login_atendentes();
 void login_gerente();
 void limpar_dados_atendente();
 void limpar_dados_cliente();
 void cadastroCliente();
 void cadastroAtendente();
 void diagnosticoRapido();
 void limparInicio();

private slots:

    void on_confirmar1_clicked();

    void on_atenvoltar_clicked();

    void on_gervoltar_clicked();

    void on_confpg2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
