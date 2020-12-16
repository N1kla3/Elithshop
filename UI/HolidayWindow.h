//
// Created by nicolas on 16/12/2020.
//
#pragma once

#ifndef SHOP_HOLIDAYWINDOW_H
#define SHOP_HOLIDAYWINDOW_H

#include <QWidget>
#include "../IShop.h"

class HolidayWindow : public QWidget
{
Q_OBJECT
public:
    HolidayWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};


#endif //SHOP_HOLIDAYWINDOW_H
