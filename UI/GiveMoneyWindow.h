//
// Created by nicolas on 16/12/2020.
//
#pragma once

#ifndef SHOP_GIVEMONEYWINDOW_H
#define SHOP_GIVEMONEYWINDOW_H

#include <QWidget>
#include "../IShop.h"

class GiveMoneyWindow : public QWidget
{
Q_OBJECT
public:
    GiveMoneyWindow(IShop* shop, QWidget* parent);

private:
    IShop* m_shop;
};


#endif //SHOP_GIVEMONEYWINDOW_H
