#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QStandardPaths>
#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;

    if (File_Path == ""){
        File_Path = QFileDialog::getSaveFileName(this,tr("Save New File"),QDir::homePath(),tr("Text Files (*.txt);;All Files (*)"));
    }
    QFile file(File_Path);

    if (!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error",file.errorString());
    }


    QTextStream out(&file);
    for (int i = 0;i<ui->listWidget->count();i++){
        out << ui->listWidget->item(i)->text() << "\n";
    }
    file.close();
}

void MainWindow::on_addText_clicked()
{
    QListWidgetItem* item = new QListWidgetItem(ui->lineEdit->text(),ui->listWidget);
    ui->listWidget->addItem(item);
    item->setFlags(item->flags() | Qt::ItemIsEditable);
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
}

void MainWindow::on_removeText_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}


void MainWindow::on_removeAllText_clicked()
{
    ui->listWidget->clear();
}


void MainWindow::on_actionOpen_Notes_triggered()
{
    File_Path = QFileDialog::getOpenFileName(this,"Open The File");
    QFile file(File_Path);
    if (!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error",file.errorString());
    }

    QTextStream in(&file);
    while (!in.atEnd()){
        QListWidgetItem* item = new QListWidgetItem(in.readLine(),ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }
    file.close();

}


void MainWindow::on_actionSave_triggered()
{
    if (File_Path == ""){
        File_Path = QFileDialog::getSaveFileName(this,tr("Save New File"),QDir::homePath(),tr("Text Files (*.txt);;All Files (*)"));
    }
    QFile file(File_Path);

    if (!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error",file.errorString());
    }

    QTextStream out(&file);
    for (int i = 0;i<ui->listWidget->count();i++){
        out << ui->listWidget->item(i)->text() << "\n";
    }
    file.close();
}

