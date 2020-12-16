//
// Created by nicolas on 16/12/2020.
//

#include "HolidayWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>

HolidayWindow::HolidayWindow(IShop *shop, QWidget *parent)
{
    auto layout = new QVBoxLayout(this);

    auto table = new QTableWidget(0, 8, this);
    table->setHorizontalHeaderLabels(QStringList() << "ID" << "FirstName" << "SecondName" << "ThirdName" << "Position"
        << "PhoneNumber" << "BankReq" << "Hours");

    layout->addWidget(table);

    setLayout(layout);
}
