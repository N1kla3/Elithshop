//
// Created by nicolas on 09/12/2020.
//
#pragma once

#ifndef SHOP_IPRODUCTCOMMAND_H
#define SHOP_IPRODUCTCOMMAND_H


class IProductCommand
{
public:
    virtual void execute(IProductControlService* service) = 0;
};


#endif //SHOP_IPRODUCTCOMMAND_H
