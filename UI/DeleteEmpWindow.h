//
// Created by nicolas on 16/12/2020.
//
#pragma once

#ifndef SHOP_DELETEEMPWINDOW_H
#define SHOP_DELETEEMPWINDOW_H

#include <QWidget>
#include "../IShop.h"

class DeleteEmpWindow : public QWidget
{
    Q_OBJECT
public:
    DeleteEmpWindow(IShop* shop, QWidget* parent);

private:
    IShop* m_shop;
};


#endif //SHOP_DELETEEMPWINDOW_H
