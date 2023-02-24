#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->setCe


    subScript = new QAction("Sub", this);
    subScript->setIcon(QIcon(":imgaes/subscript.png"));
    subScript->setCheckable(true);
    subScript->setChecked(false);
    connect(subScript,SIGNAL(triggered()),this,SLOT(subscript_checked()));


    superScript= new QAction("Super",this);
    superScript->setIcon(QIcon(":imgaes/superscript.png"));
    superScript->setCheckable(true);
    superScript->setChecked(false);
    connect(superScript,SIGNAL(triggered()),this,SLOT(superscript_checked()));

    ui->toolBar->addAction(subScript);
    ui->toolBar->addAction(superScript);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionMy_Resume_triggered()
{
    QMessage
}

void MainWindow::on_actionBold_triggered()
{
    QFont font;
    font.setBold(true);
    ui->textEdit->setFont(font);
}

void MainWindow::superscript_checked()
{
    subScript-> setChecked(false);
    QTextCharFormat format;

    if(superScript -> isChecked())
        format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    else
        format.setVerticalAlignment(QTextCharFormat::AlignNormal);

    ui -> textEdit -> mergeCurrentCharFormat(format);


}

void MainWindow::subscript_checked()
{
    superScript->setChecked(false);
    QTextCharFormat format;

    if(subScript->isChecked())
        format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    else
        format.setVerticalAlignment(QTextCharFormat::AlignNormal);

    ui->textEdit->mergeCurrentCharFormat(format);
}




