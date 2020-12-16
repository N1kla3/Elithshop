//
// Created by nicolas on 13/12/2020.
//
#pragma once

#ifndef SHOP_AUTHWINDOW_H
#define SHOP_AUTHWINDOW_H

#include <QWidget>

class IShop;

class AuthWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AuthWindow(QWidget* parent = nullptr, IShop* shop = nullptr) :
        QWidget(parent),
        shop(shop)
    {
        init();
    }
signals:
    void close_signal();

private:
    void init();

    IShop* shop;
};


#endif //SHOP_AUTHWINDOW_H
