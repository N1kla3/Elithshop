//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_IEMPLOYCONTROLSERVICEIMPL_H
#define SHOP_IEMPLOYCONTROLSERVICEIMPL_H

#include "IEmployControlService.h"
#include "Product.h"

class IEmployControlServiceImpl : public IEmployControlService
{
public:
    virtual void addEmployee(const string &string1, const string &string2, const string &string3, const string &string4,
                     const string &string5, const string &string6, const string &string7,
                     const string &string8) override;
    virtual void delEmployee(const Employee &employee) override;
    virtual std::vector<Employee> empToHolidays() override;
    virtual std::vector<Employee> watchEmployees() override;
    virtual void giveSalaryToEmp(const Employee &employee) override;


    std::vector<Employee*> emps;
};


#endif //SHOP_IEMPLOYCONTROLSERVICEIMPL_H
