#ifndef PRODUCTMANAGE_H
#define PRODUCTMANAGE_H

#include <QString>
#include <QFileDialog>

/**
 * 工程管理模块
 * 主要功能为管理工程文件
**/
class ProductManage
{
public:
    ProductManage();
    
    /**
     * 打开工程, 记录并返回工程路径
    **/
    static QString openProduct(QWidget* baseWidget);
    
    /**
     * 获得工程目录
    **/
    static QString getProductPath();
    
private:
    static QString productPath;
    
};

#endif // PRODUCTMANAGE_H
