//
// Created by nicolas on 03/12/2020.
//
#pragma once

#ifndef SHOP_EMPLOYEE_H
#define SHOP_EMPLOYEE_H

#include <string>

enum class ERole
{
    ADMIN,
    MANAGER
};

using std::string;

struct Employee
{
    string id;
    string login;
    string password;
    string second_name;
    string name;
    string third_name;
    string position;
    string phone_number;
    string bank_requisite;
    float hours;
    ERole role;
};


#endif //SHOP_EMPLOYEE_H
