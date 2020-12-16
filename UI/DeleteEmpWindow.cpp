//
// Created by nicolas on 16/12/2020.
//

#include "DeleteEmpWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>

DeleteEmpWindow::DeleteEmpWindow(IShop *shop, QWidget *parent) :
    QWidget(parent)
{
    auto layout = new QVBoxLayout(this);

    auto name = new QLineEdit("Name", this);
    auto delete_but = new QPushButton("Delete Employee", this);

    connect(delete_but, &QPushButton::clicked, this, [](){
       //TODO lofia
    });

    layout->addWidget(name);
    layout->addWidget(delete_but);

    setLayout(layout);
}
