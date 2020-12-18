//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_ADDPRODUCTWINDOW_H
#define SHOP_ADDPRODUCTWINDOW_H

#include <QWidget>
#include "../IShop.h"

class AddProductWindow : public QWidget
{
Q_OBJECT
public:
    AddProductWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};


#endif //SHOP_ADDPRODUCTWINDOW_H
