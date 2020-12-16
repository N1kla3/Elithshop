//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_ISHOP_H
#define SHOP_ISHOP_H

#include <vector>

class IAuth;
class Employee;
class IEmployControlService;
class IProductControlService;

class IShop
{
public:
    virtual void comeIn() = 0;
    virtual void startWork() = 0;
    virtual void exit() = 0;

    IAuth* auth = nullptr;
    std::vector<Employee*> employees{};
    Employee* current_emp = nullptr;
    IEmployControlService* employ_service = nullptr;
    IProductControlService* product_service = nullptr;
};


#endif //SHOP_ISHOP_H
