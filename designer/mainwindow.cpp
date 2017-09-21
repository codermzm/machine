#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

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

void MainWindow::on_action_new_product_triggered()
{
    QString str = ProductManage::openProduct(this);
    if (str.isEmpty()) {
        QMessageBox::information(this,"提示","空串");
    } else {
        QMessageBox::information(this,"提示", str);
    }
}
