//
// Created by nicolas on 09/12/2020.
//
#pragma once

#ifndef SHOP_CONTROLPRODUCTWINDOW_H
#define SHOP_CONTROLPRODUCTWINDOW_H


#include <string>
#include <QPushButton>
#include <QVBoxLayout>
#include "../Commands/ICommand.h"
#include "../IShop.h"

class ControlProductWindow : public QWidget
{
public:
    ControlProductWindow(IShop* shop, QWidget* parent = nullptr) :
        QWidget(parent),
        m_Shop(shop)
    {
        auto layout = new QVBoxLayout(this);
        for (auto commanda : commands)
        {
            auto button = new QPushButton(this);
            layout->addWidget(button);
        }
    }
    void AddCommand(ICommand* command)
    {
        commands.push_back(command);
    }
private:
    IShop* m_Shop;
    std::vector<ICommand*> commands{};
};


#endif //SHOP_CONTROLPRODUCTWINDOW_H
