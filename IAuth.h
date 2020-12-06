//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_IAUTH_H
#define SHOP_IAUTH_H

#include "Employee.h"

class IAuth
{
public:
    virtual bool checkLoginPassword(std::string, std::string) = 0;
    virtual Employee login(std::string, std::string) = 0;
};


#endif //SHOP_IAUTH_H
