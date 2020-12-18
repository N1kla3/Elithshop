//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_WATCHSHOPROOMWINDOW_H
#define SHOP_WATCHSHOPROOMWINDOW_H

#include <QWidget>
#include "../IShop.h"

class WatchShopRoomWindow : public QWidget
{
    Q_OBJECT
public:
    WatchShopRoomWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};


#endif //SHOP_WATCHSHOPROOMWINDOW_H
