//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_ISHOPBASIC_H
#define SHOP_ISHOPBASIC_H

#include "IShop.h"

class IShopBasic : public IShop
{
public:
    void comeIn() override;
    void startWork() override;
    void exit() override;
};


#endif //SHOP_ISHOPBASIC_H
