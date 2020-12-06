//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_ISHOP_H
#define SHOP_ISHOP_H


class IShop
{
public:
    virtual void comeIn() = 0;
    virtual void startWork() = 0;
    virtual void exit() = 0;
};


#endif //SHOP_ISHOP_H
