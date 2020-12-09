//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_ISHOPBASIC_H
#define SHOP_ISHOPBASIC_H

#include "IShop.h"
#include <vector>

class IAuth;
class Employee;
class IEmployControlService;
class IProductControlService;

class IShopBasic : public IShop
{
public:
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
