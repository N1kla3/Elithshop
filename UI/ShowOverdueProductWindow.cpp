//
// Created by nicolas on 18/12/2020.
//

#include "ShowOverdueProductWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QTableWidget>

ShowOverdueProductWindow::ShowOverdueProductWindow(IShop *shop, QWidget *parent) :
    QWidget(parent),
    m_shop(shop)
{
    auto layout = new QVBoxLayout(this);

    auto table = new QTableWidget(0, 8, this);
    table->setHorizontalHeaderLabels(QStringList() << "Product Name" << "Amount" << "Amount in ShopRoom"
                                                   << "Cost Price" << "Sell cost"
                                                   << "Supplier" << "Date of creation" << "Shelf date type");

    layout->addWidget(table);//TODO fill table

    setLayout(layout);
}
