//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_ACCEPTORDERWINDOW_H
#define SHOP_ACCEPTORDERWINDOW_H

#include <QWidget>
#include "../IShop.h"

class AcceptOrderWindow : public QWidget
{
    Q_OBJECT
public:
    AcceptOrderWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_Shop;
};


#endif //SHOP_ACCEPTORDERWINDOW_H
