//
// Created by nicolas on 16/12/2020.
//

#include "EditEmpWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>

EditEmpWindow::EditEmpWindow(IShop *shop, QWidget *parent) :
    QWidget(parent),
    m_shop(shop)
{
    auto layout = new QVBoxLayout(this);

    auto first_name = new QLineEdit("First Name", this);
    auto second_name = new QLineEdit("Second Name", this);
    auto third_name = new QLineEdit("Third Name", this);
    auto position = new QLineEdit("Postion", this);
    auto phone_number = new QLineEdit("Phone Number", this);
    auto bank_req = new QLineEdit("Bank Req", this);
    auto login = new QLineEdit("Login", this);
    auto password = new QLineEdit("Password", this);
    auto add_button = new QPushButton("Add Emp", this);

    auto check_admin = new QCheckBox("Admin", this);
    auto check_manager = new QCheckBox("Manager", this);
    auto check_emp = new QCheckBox("Employee", this);

    connect(add_button, &QPushButton::clicked, this, [](){
        //TODO logic
    });

    layout->addWidget(first_name);
    layout->addWidget(second_name);
    layout->addWidget(third_name);
    layout->addWidget(position);
    layout->addWidget(phone_number);
    layout->addWidget(bank_req);
    layout->addWidget(login);
    layout->addWidget(password);
    layout->addWidget(check_admin);
    layout->addWidget(check_manager);
    layout->addWidget(check_emp);
    layout->addWidget(add_button);

    setLayout(layout);

}
