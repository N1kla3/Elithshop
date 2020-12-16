//
// Created by nicolas on 16/12/2020.
//
#pragma once

#ifndef SHOP_EDITEMPWINDOW_H
#define SHOP_EDITEMPWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include "../IShop.h"

class EditEmpWindow : public QWidget
{
Q_OBJECT
public:
    EditEmpWindow(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};


#endif //SHOP_EDITEMPWINDOW_H
