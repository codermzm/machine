#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "productmanage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_action_new_product_triggered();
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
