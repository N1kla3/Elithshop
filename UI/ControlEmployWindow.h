//
// Created by nicolas on 09/12/2020.
//
#pragma once

#ifndef SHOP_CONTROLEMPLOYWINDOW_H
#define SHOP_CONTROLEMPLOYWINDOW_H


#include <QWidget>
#include <QPushButton>
#include "../IShop.h"
#include "AddWindow.h"
#include "DeleteEmpWindow.h"
#include "HolidayWindow.h"
#include "EditEmpWindow.h"
#include "../Commands/ICommand.h"

class ControlEmployWindow : public QWidget
{
public:
    ControlEmployWindow(IShop* shop, QWidget* parent = nullptr) :
        QWidget(parent),
        m_Shop(shop)
    {
        auto layout = new QVBoxLayout(this);

        auto add = new QPushButton("Add", this);
        auto del = new QPushButton("Del", this);
        auto holiday = new QPushButton("Holiday", this);
        auto edit = new QPushButton("Edit", this);

        layout->addWidget(add);
        connect(add, &QPushButton::clicked, this, &ControlEmployWindow::showAddEmpWindow);
        layout->addWidget(del);
        connect(del, &QPushButton::clicked, this, &ControlEmployWindow::showDelEmpWindow);
        layout->addWidget(holiday);
        connect(holiday, &QPushButton::clicked, this, &ControlEmployWindow::showSendEmpToHolidayWindow);
        layout->addWidget(edit);
        connect(edit, &QPushButton::clicked, this, &ControlEmployWindow::showEditEmpWindow);

        for (auto command : commands)
        {
            auto button = new QPushButton(this);
            layout->addWidget(button);
        }

    }
    void AddCommand(ICommand* command)
    {
        commands.push_back(command);
    }
    void showAddEmpWindow()
    {
        auto window = new AddWindow(m_Shop, this);
        window->show();
    }
    void showDelEmpWindow()
    {
        auto window = new DeleteEmpWindow(m_Shop, this);
        window->show();
    }
    void showSendEmpToHolidayWindow()
    {
        auto window = new HolidayWindow(m_Shop, this);
        window->show();
    }
    void showEditEmpWindow()
    {
        auto window = new EditEmpWindow(m_Shop, this);
        window->show();
    }

private:
    std::vector<ICommand*> commands{};
    IShop* m_Shop;
};


#endif //SHOP_CONTROLEMPLOYWINDOW_H
