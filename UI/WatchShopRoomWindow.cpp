//
// Created by nicolas on 18/12/2020.
//

#include "WatchShopRoomWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>

WatchShopRoomWindow::WatchShopRoomWindow(IShop *shop, QWidget *parent) :
    QWidget(parent)
{
    auto layout = new QVBoxLayout(this);

    auto table = new QTableWidget(0, 8, this);
    table->setHorizontalHeaderLabels(QStringList() << "Product Name" << "Product Last" << "Expected product"
                                                   << "Sold product" << "Cost price"
                                                   << "Sum of Cost price" << "Sales price" << "Sum of sales" << "Supplier"
                                                   << "Date" << "Shelf life");

    layout->addWidget(table);//TODO fill table

    setLayout(layout);
}
