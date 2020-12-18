//
// Created by nicolas on 18/12/2020.
//

#include "AddProductWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

AddProductWindow::AddProductWindow(IShop *shop, QWidget *parent) :
    QWidget(parent),
    m_shop(shop)
{
    auto layout = new QVBoxLayout(this);

    auto name = new QLineEdit("Name", this);
    auto amount = new QLineEdit("Amount", this);
    auto cost_price = new QLineEdit("Cost price", this);
    auto sell_cost = new QLineEdit("Sell cost", this);
    auto supplier = new QLineEdit("Supplier", this);
    auto date_creation = new QLineEdit("Date of creation", this);
    auto shelf_type = new QLineEdit("Shelf type", this);
    auto add_button = new QPushButton("Add Emp", this);

    connect(add_button, &QPushButton::clicked, this, [](){
        //TODO logic
    });

    layout->addWidget(name);
    layout->addWidget(amount);
    layout->addWidget(cost_price);
    layout->addWidget(sell_cost);
    layout->addWidget(supplier);
    layout->addWidget(date_creation);
    layout->addWidget(shelf_type);
    layout->addWidget(add_button);

    setLayout(layout);
}
