//
// Created by nicolas on 13/12/2020.
//

#include "AuthWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include "../IShop.h"
#include "../IAuth.h"

void AuthWindow::init()
{
    auto layout = new QVBoxLayout(this);

    auto name_edit = new QLineEdit("Name", this);
    auto pass_edit = new QLineEdit("Password", this);
    auto login_but = new QPushButton("Login", this);

    connect(login_but, &QPushButton::clicked, this, [this, name_edit, pass_edit](){
        std::string name = name_edit->text().toStdString();
        std::string password = pass_edit->text().toStdString();
        if(shop->auth->checkLoginPassword(name, password))
        {
            shop->auth->login(name, password);
            emit close_signal();
        }
    });

    layout->addWidget(name_edit);
    layout->addWidget(pass_edit);
    layout->addWidget(login_but);

    setLayout(layout);
}
