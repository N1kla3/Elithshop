//
// Created by nicolas on 16/12/2020.
//

#include "GiveMoneyWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>
#include <QLabel>

GiveMoneyWindow::GiveMoneyWindow(IShop *shop, QWidget *parent) :
    QWidget(parent)
{
    auto layout = new QVBoxLayout(this);

    auto name = new QLineEdit("Name", this);
    auto calculate = new QPushButton("Calculate", this);
    auto output = new QLabel("", this);

    connect(calculate, &QPushButton::clicked, this, [](){
        //TODO logic
    });

    layout->addWidget(name);
    layout->addWidget(calculate);
    layout->addWidget(output);

    setLayout(layout);
}
