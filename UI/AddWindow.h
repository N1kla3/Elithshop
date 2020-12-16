//
// Created by nicolas on 16/12/2020.
//
#pragma once

#ifndef SHOP_ADDWINDOW_H
#define SHOP_ADDWINDOW_H

#include <QWidget>
#include "../IShop.h"

class AddWindow : public QWidget
{
Q_OBJECT
public:
    AddWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};


#endif //SHOP_ADDWINDOW_H
