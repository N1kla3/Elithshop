//
// Created by nicolas on 16/12/2020.
//
#pragma once

#ifndef SHOP_SHOWEMPINFOWINDOW_H
#define SHOP_SHOWEMPINFOWINDOW_H

#include <QWidget>
#include "../IShop.h"

class ShowEmpInfoWindow : public QWidget
{
Q_OBJECT
public:
    ShowEmpInfoWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};


#endif //SHOP_SHOWEMPINFOWINDOW_H
