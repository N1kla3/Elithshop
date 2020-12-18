//
// Created by nicolas on 18/12/2020.
//

#include "FromStorageToShopRoomWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>

FromStorageToShopRoomWindow::FromStorageToShopRoomWindow(IShop *shop, QWidget *parent) :
    QWidget(parent),
    m_Shop(shop)
{
    auto layout = new QVBoxLayout(this);

    auto name = new QLineEdit("Name", this);
    auto amount = new QLineEdit("Amount", this);
    auto send_prod = new QPushButton("Send to ShopRoom", this);

    connect(send_prod, &QPushButton::clicked, this, [](){
       //TODO logic
    });

    layout->addWidget(name);
    layout->addWidget(amount);
    layout->addWidget(send_prod);

    setLayout(layout);
}
