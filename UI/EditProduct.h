//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_EDITPRODUCT_H
#define SHOP_EDITPRODUCT_H

#include <QWidget>
#include <QVBoxLayout>
#include "../IShop.h"

class EditProduct : public QWidget
{
    Q_OBJECT
public:
    EditProduct(IShop* shop, QWidget* parent = nullptr);

private:
    IShop* m_shop;
};


#endif //SHOP_EDITPRODUCT_H
