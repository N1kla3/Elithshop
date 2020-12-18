//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_DELPRODUCTWINDOW_H
#define SHOP_DELPRODUCTWINDOW_H

#include <QWidget>
#include "../IShop.h"

class DelProductWindow : public QWidget
{
Q_OBJECT
public:
    DelProductWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_Shop;
};


#endif //SHOP_DELPRODUCTWINDOW_H
