//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_ORDERFROMSUPPLIERWINDOW_H
#define SHOP_ORDERFROMSUPPLIERWINDOW_H

#include <QWidget>
#include "../IShop.h"

class OrderFromSupplierWindow : public QWidget
{
    Q_OBJECT
public:
    OrderFromSupplierWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_Shop;
};


#endif //SHOP_ORDERFROMSUPPLIERWINDOW_H
