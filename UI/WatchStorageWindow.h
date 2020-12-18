//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_WATCHSTORAGEWINDOW_H
#define SHOP_WATCHSTORAGEWINDOW_H

#include <QWidget>
#include "../IShop.h"

class WatchStorageWindow : public QWidget
{
    Q_OBJECT
public:
    WatchStorageWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};



#endif //SHOP_WATCHSTORAGEWINDOW_H
