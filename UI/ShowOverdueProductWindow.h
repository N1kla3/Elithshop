//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_SHOWOVERDUEPRODUCTWINDOW_H
#define SHOP_SHOWOVERDUEPRODUCTWINDOW_H

#include <QWidget>
#include "../IShop.h"

class ShowOverdueProductWindow : public QWidget
{
    Q_OBJECT
public:
    ShowOverdueProductWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};


#endif //SHOP_SHOWOVERDUEPRODUCTWINDOW_H
