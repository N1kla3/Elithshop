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
    IShopBasic(IAuth* auth, IEmployControlService* emp, IProductControlService* prod)
    {
       this->auth = auth;
       employ_service = emp;
       product_service = prod;
    }
    virtual void comeIn() override;
    virtual void startWork() override;
    virtual void exit() override;
    IAuth* auth = nullptr;
    std::vector<Employee*> employees{};
    Employee* current_emp = nullptr;
    IEmployControlService* employ_service = nullptr;
    IProductControlService* product_service = nullptr;
};


#endif //SHOP_ISHOPBASIC_H
