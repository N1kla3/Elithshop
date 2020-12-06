//
// Created by nicolas on 03/12/2020.
//
#pragma once

#ifndef SHOP_IEMPLOYCONTROLSERVICE_H
#define SHOP_IEMPLOYCONTROLSERVICE_H

#include <string>
#include <vector>
#include "Employee.h"

using std::string;

class IEmployControlService
{
public:
    virtual void addEmployee(const string&,
                     const string&,
                     const string&,
                     const string&,
                     const string&,
                     const string&,
                     const string&,
                     const string&) = 0;
    virtual void delEmployee(const Employee&) = 0;
    virtual std::vector<Employee> empToHolidays() = 0;
    virtual std::vector<Employee> watchEmployees() = 0;
    virtual void giveSalaryToEmp(const Employee&) = 0;
};


#endif //SHOP_IEMPLOYCONTROLSERVICE_H
