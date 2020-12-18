//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_FROMSTORAGETOSHOPROOMWINDOW_H
#define SHOP_FROMSTORAGETOSHOPROOMWINDOW_H

#include <QWidget>
#include "../IShop.h"

class FromStorageToShopRoomWindow : public QWidget
{
Q_OBJECT
public:
    FromStorageToShopRoomWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_Shop;
};


#endif //SHOP_FROMSTORAGETOSHOPROOMWINDOW_H
