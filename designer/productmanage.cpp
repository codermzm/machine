#include "productmanage.h"

/**
 * 初始化静态变量
**/
QString ProductManage::productPath = "";

/**
 * 工程管理模块
 * 主要功能为管理工程文件
**/
ProductManage::ProductManage()
{
}

/**
 * 打开工程, 记录并返回工程路径
**/
QString ProductManage::openProduct(QWidget* baseWidget) {
    QFileDialog *fileDialog = new QFileDialog(baseWidget);//创建一个QFileDialog对象，构造函数中的参数可以有所添加。
    fileDialog->setWindowTitle(QObject::tr("选择文件"));//设置文件保存对话框的标题
    fileDialog->setAcceptMode(QFileDialog::AcceptOpen);//设置文件对话框为打开模式
    fileDialog->setFileMode(QFileDialog::AnyFile);//设置文件对话框弹出的时候显示任何文件，不论是文件夹还是文件
    fileDialog->setViewMode(QFileDialog::Detail);//文件以详细的形式显示，显示文件名，大小，创建日期等信息；
    
    //还有另一种形式QFileDialog::List，这个只是把文件的文件名以列表的形式显示出来
    fileDialog->setGeometry(10,30,300,200);//设置文件对话框的显示位置
    fileDialog->setDirectory(".");//设置文件对话框打开时初始打开的位置
    QStringList filters;
    filters << "Product files (*.product)";
    fileDialog->setNameFilters(filters);//设置文件类型过滤器
    
    if(fileDialog->exec() == QDialog::Accepted) {//注意使用的是QFileDialog::Accepted或者QDialog::Accepted,不是QFileDialog::Accept
        QString path = fileDialog->selectedFiles()[0];//得到用户选择的文件名
        
        return path;
    }
    
    return QString();
}

/**
 * 获得工程目录
**/
QString ProductManage::getProductPath(){
    return productPath;
}
