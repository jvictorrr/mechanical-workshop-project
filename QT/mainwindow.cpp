#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::conClose()//função para fechar o banco de dados
{
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}

bool MainWindow::conOpen()//função para abrir o banco de dados
{
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/projetao.db");
    if(!db.open()){
      QMessageBox::critical(this,"Erro fatal",db.lastError().text());
      return false;
    }else
      return true;
}

void MainWindow::setupTable()//função para inserir o banco de dados na tabela
{

    conOpen();
    QSqlTableModel*model1 = new  QSqlTableModel(this,db);//modelo que permite que o banco de dados seja alterado na propria tabela

    model1->setTable("clientes");
    ui->cli_cadastrados->setModel(model1);
    model1->select();
    conClose();
}

void MainWindow::setupTable2()
{
    conOpen();
    QSqlTableModel*model = new  QSqlTableModel(this,db);

    model->setTable("atendente");
    ui->at_cadastrados->setModel(model);
    model->select();
    conClose();

}

void MainWindow::setupTable3()
{
    conOpen();

    QSqlTableModel*model2 = new  QSqlTableModel(this,db);

    model2->setTable("estoque");
    ui->estoque->setModel(model2);
    model2->select();
}

void MainWindow::login_atendentes()//realiza tentativa de login do atendente
{

    int aux1=0;
    conOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM atendente where login='"+ui->login->text() +"' and senha='"+ui->senha->text() +"' ");
      if(qry.exec()){

      while(qry.next()){
          aux1++;
       }
      }
      if(aux1>=1){
      ui->stackedWidget->setCurrentIndex(1);
      conClose();
      } else{
       QMessageBox::information(this, "Aviso","LOGIN e SENHA incorretos");
       conClose();
      }
}

void MainWindow::login_gerente()//realiza a tentativa de login do gerente
{

    int aux=0;
    conOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM gerente where login='"+ui->login->text() +"' and senha='"+ui->senha->text()+"' ");
      if(qry.exec( )){

      while(qry.next()){
          aux++;
       }
    }
      if(aux>=1){
      ui->stackedWidget->setCurrentIndex(7);
      conClose();

      }else{
       QMessageBox::information(this, "Aviso","LOGIN e SENHA incorretos");
        conClose();
     }

}

void MainWindow::limpar_dados_atendente()//função que limpa as linhas de texto que já foram utilizadas para que não gere lixo
{
    ui->at_nome->setText(NULL);
    ui->at_rg->setText(NULL);
    ui->at_cpf->setText(NULL);
    ui->at_contato->setText(NULL);
    ui->at_login->setText(NULL);
    ui->at_senha->setText(NULL);
}

void MainWindow::limpar_dados_cliente()
{
    ui->cli_nome->setText(NULL);
    ui->cli_rg->setText(NULL);;
    ui->cli_cpf->setText(NULL);
    ui->cli_contato->setText(NULL);
    ui->cli_carro->setText(NULL);
    ui->car_marca->setText(NULL);
    ui->car_placa->setText(NULL);
    ui->car_ano->setText(NULL);
}

void MainWindow::cadastroCliente()//função que realiza o cadastro de um novo cliente
{
    Cliente*cliente=new Cliente(ui->cli_nome->text(),ui->cli_cpf->text().toInt(NULL,10),ui->cli_rg->text().toInt(NULL,10),ui->cli_contato->text().toInt(NULL,10));
    Veiculo*veic=new Veiculo(ui->cli_carro->text(),ui->car_marca->text(),ui->car_placa->text(),ui->car_ano->text().toInt(NULL,10));
   conOpen();
   QSqlQuery ate;
   ate.prepare("INSERT INTO clientes(nome, rg, cpf,contato,carro,marca,placa,ano) VALUES(:nome, :rg, :cpf,:contato,:carro,:marca,:placa,:ano)");
   ate.bindValue(":nome",cliente->retornaNome());
   ate.bindValue(":rg",cliente->retornaRg());
   ate.bindValue(":cpf",cliente->retornaCpf());
   ate.bindValue(":contato",cliente->retornaContato());
   ate.bindValue(":carro",veic->retornaCarro());
   ate.bindValue(":marca",veic->retornaMarca());
   ate.bindValue(":placa",veic->retornaPlaca());
   ate.bindValue(":ano",veic->retornaAno());
   if(ate.exec()){
       QMessageBox::information(this,"Registrado","Cliente cadastrado com sucesso");
       conClose();
   }else{
       QMessageBox::information(this,"Erro",ate.lastError().text());
       conClose();
   }
}

void MainWindow::cadastroAtendente()//função que realiza cadastro de um novo atendente
{
    Atendente*atendente=new Atendente(ui->at_nome->text(),ui->at_cpf->text().toInt(NULL,10),ui->at_rg->text().toInt(NULL,10),ui->at_contato->text().toInt(NULL,10),ui->at_login->text(),ui->at_senha->text());
    conOpen();
    QSqlQuery ate;
    ate.prepare("INSERT INTO atendente(nome, rg, cpf,contato,login,senha) VALUES(:nome, :rg, :cpf,:contato,:login,:senha)");
    ate.bindValue(":nome",atendente->retornaNome());
    ate.bindValue(":rg",atendente->retornaRg());
    ate.bindValue(":cpf",atendente->retornaCpf());
    ate.bindValue(":contato",atendente->retornaContato());
    ate.bindValue(":login",atendente->retornaLogin());
    ate.bindValue(":senha",atendente->retornaSenha());
    if(ate.exec()){
        QMessageBox::information(this,"Regsitrado","Atendente cadastrado com sucesso");
        ui->stackedWidget->setCurrentIndex(8);
        conClose();
    }else{
        QMessageBox::information(this,"Erro",ate.lastError().text());
        conClose();
    }
}

void MainWindow::diagnosticoRapido(){//função do diagnostico
    if ((ui->checkBox1->isChecked())){ //se o check estiver marcado ele configura a etiqueta com um determinado texto

        ui->label_12->setText("Regular alinhamento");
        ui->checkBox1->setChecked(false);//ao configurar o texto o botão é desmarcado para que não fique lixo das operações antecedentes
   }else
        ui->label_12->setText(NULL);//se o botão não estiver selecionado a estiqueta recebe null

    if ((ui->checkBox2->isChecked())){
        ui->label_13->setText("Revisar caixa de direção");
                ui->checkBox2->setChecked(false);
    }else
         ui->label_13->setText(NULL);

    if ((ui->checkBox3->isChecked())){
        ui->label_14->setText("Revisar escapamento");
        ui->checkBox3->setChecked(false);
    }else
        ui->label_14->setText(NULL);

    if ((ui->checkBox4->isChecked())){
        ui->label_15->setText("Limpeza do filtro de ar");
          ui->checkBox4->setChecked(false);
    }else
        ui->label_15->setText(NULL);

    if ((ui->checkBox5->isChecked())){
        ui->label_16->setText("Revisar parte elétrica");
          ui->checkBox5->setChecked(false);
    }else
         ui->label_16->setText(NULL);

    if ((ui->checkBox6->isChecked())){
        ui->label_17->setText("Revisar nível de óleo");
          ui->checkBox6->setChecked(false);
    }else
         ui->label_17->setText(NULL);

    if ((ui->checkBox7->isChecked())){
        ui->label_18->setText("Revisar velas e pistões");
          ui->checkBox7->setChecked(false);
    }else
         ui->label_18->setText(NULL);

    if ((ui->checkBox8->isChecked())){
        ui->label_19->setText("Revisar balanceamento");
          ui->checkBox8->setChecked(false);
    }else
         ui->label_19->setText(NULL);

    if ((ui->checkBox9->isChecked())){
        ui->label_20->setText("Revisar caixa de ignição");
         ui->checkBox9->setChecked(false);
    }else
         ui->label_20->setText(NULL);

    if ((ui->checkBox10->isChecked())){
        ui->label_21->setText("Revisar amortecedor e suspensão");
          ui->checkBox10->setChecked(false);
    }else
        ui->label_21->setText(NULL);
}

void MainWindow::limparInicio()
{
    ui->login->setText(NULL);
    ui->senha->setText(NULL);
}

void MainWindow::on_confirmar1_clicked()//função ao tentar realizar o login
{
    QString log= ui->login->text();
    QString sen= ui->senha->text();
    int aux=0;
    if(!conOpen())
      QMessageBox::critical(this,"Erro fatal",db.lastError().text());
    else if(ui->opAtendente->isChecked())
         login_atendentes();
         else if(ui->opGerente->isChecked())
               login_gerente();
               else{
                    QMessageBox::information(this, "Aviso","Selecione alguma opção para realizar o LOGIN");
                    limparInicio();
    }
}
void MainWindow::on_atenvoltar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_gervoltar_clicked()
{
    limpar_dados_atendente();
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_confpg2_clicked()//função que seleciona qual a pagina seguinte depedendo o radiobutton selecionado
{
    if(ui->cad_cliente->isChecked()){
        ui->stackedWidget->setCurrentIndex(2);
    }else if(ui->lista_clientes->isChecked()){
        setupTable();
        ui->stackedWidget->setCurrentIndex(4);
    }else if(ui->diag->isChecked())
        ui->stackedWidget->setCurrentIndex(5);
    else
        QMessageBox::information(this, "Aviso","Selecione alguma opção para continuar!");
}

void MainWindow::on_pushButton_clicked()
{
    limpar_dados_cliente();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_2_clicked()//função que trata os erros antes que o usuario possa prosseguir o cadastro
{
    try{
        if(ui->cli_nome->text()==NULL)
            throw "Preencha o campo com o NOME para prosseguir!";
        if(ui->cli_cpf->text()==NULL)
            throw "Preencha o campo o CPF para prosseguir!";
        if(ui->cli_rg->text()==NULL)
            throw "Preencha o campo com o RG para prosseguir!";
        if(ui->cli_contato->text()==NULL)
            throw "Preencha o campo com o CONTATO para prosseguir!";
         ui->stackedWidget->setCurrentIndex(3);
        }catch(const char* a){

        QMessageBox::information(this,"Erro",a);
       }
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_4_clicked()//função que trata os erros para o cadastro ser finalizado
{

    try{
        if(ui->cli_carro->text()==NULL)
            throw "Preencha o campo com o nome do carro para prosseguir!";
        if(ui->car_marca->text()==NULL)
            throw "Preencha o campo a marca para prosseguir!";
        if(ui->car_placa->text()==NULL)
            throw "Preencha o campo com a placa do carro para prosseguir!";
        if(ui->car_ano->text()==NULL)
            throw "Preencha o campo com o ano de fabricação do carro para prosseguir!";
        cadastroCliente();//cadastro realizado
        limpar_dados_cliente();//limpeza para eliminar o lixo
        ui->stackedWidget->setCurrentIndex(1);

    }catch(const char* a){

     QMessageBox::information(this,"Erro",a);
    }

}


void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    conClose();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    conClose();
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_8_clicked()
{
    if(ui->cad_ate->isChecked()){
        ui->stackedWidget->setCurrentIndex(8);
    }else if(ui->lista_ate->isChecked()){
        setupTable2();
        ui->stackedWidget->setCurrentIndex(10);
    }else if(ui->mostra_est->isChecked()){
        ui->stackedWidget->setCurrentIndex(11);
        setupTable3();

    }
    else
        QMessageBox::information(this, "Aviso","Selecione alguma opção para continuar!");
}

void MainWindow::on_pushButton_9_clicked()//função que trata os erros antes de prosseguir o cadastro
{
    try{
        if(ui->at_nome->text()==NULL)
            throw "Preencha o campo com o NOME para prosseguir!";
        if(ui->at_cpf->text()==NULL)
            throw "Preencha o campo o CPF para prosseguir!";
        if(ui->at_rg->text()==NULL)
            throw "Preencha o campo com o RG para prosseguir!";
        if(ui->at_contato->text()==NULL)
            throw "Preencha o campo com o CONTATO para prosseguir!";
         ui->stackedWidget->setCurrentIndex(9);
        }catch(const char* a){

        QMessageBox::information(this,"Erro",a);
       }

}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_pushButton_10_clicked()//função que trata os erros antes de prosseguir o cadastro
{
    try{
        if(ui->at_login->text()==NULL)
            throw "Preencha o campo com o login para prosseguir!";
        if(ui->at_senha->text()==NULL)
            throw "Preencha o campo com a senha para prosseguir!";
        if(ui->at_senha_confirmar->text()==NULL)
            throw "Preencha o campo com a senha para prosseguir!";
        if(ui->at_senha->text()!=ui->at_senha_confirmar->text())
            throw "Senhas não coincidem.\nConfirme a senha para prosseguir!";
        cadastroAtendente();//realiza o cadastro do atendente
        limpar_dados_atendente();//limpa o lixo
        ui->stackedWidget->setCurrentIndex(7);
        }catch(const char* a){
        QMessageBox::information(this,"Erro",a);
       }

}

void MainWindow::on_pushButton_12_clicked()
{
     ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_pushButton_13_clicked()
{
      ui->stackedWidget->setCurrentIndex(7);
}
void MainWindow::on_pushButton_14_clicked()
{
   conClose();
   ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_16_clicked()
{
    diagnosticoRapido();//exibe o diagnóstico rapido

    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


QString Veiculo::retornaCarro()
{
    return carro;
}

QString Veiculo::retornaMarca()
{
    return marca;
}

QString Veiculo::retornaPlaca()
{
    return placa;
}

int Veiculo::retornaAno()
{
    return ano;
}

QString Cliente::retornaNome()
{
    return nome;
}

int Cliente::retornaCpf()
{
    return cpf;
}

int Cliente::retornaRg()
{
    return rg;
}

int Cliente::retornaContato()
{
    return contato;
}

QString Pessoa::retornaNome()
{
return nome;
}

int Pessoa::retornaCpf()
{
return cpf;
}

int Pessoa::retornaRg()
{
return rg;
}
