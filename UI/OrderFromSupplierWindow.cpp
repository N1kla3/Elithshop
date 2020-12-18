//
// Created by nicolas on 18/12/2020.
//

#include "OrderFromSupplierWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>

OrderFromSupplierWindow::OrderFromSupplierWindow(IShop *shop, QWidget *parent) :
    QWidget(parent),
    m_Shop(shop)
{
    auto layout = new QVBoxLayout(this);

    auto supplier = new QLineEdit("Supplier", this);
    auto name = new QLineEdit("Name", this);
    auto amount = new QLineEdit("Amount", this);
    auto send_prod = new QPushButton("Order", this);

    connect(send_prod, &QPushButton::clicked, this, [](){
        //TODO logic
    });

    layout->addWidget(supplier);
    layout->addWidget(name);
    layout->addWidget(amount);
    layout->addWidget(send_prod);

    setLayout(layout);
}
