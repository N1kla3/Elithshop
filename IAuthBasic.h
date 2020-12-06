//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_IAUTHBASIC_H
#define SHOP_IAUTHBASIC_H

#include "IAuth.h"

class IAuthBasic : public IAuth
{
public:
    bool checkLoginPassword(std::string string1, std::string string2) override;
    Employee login(std::string string1, std::string string2) override;
};


#endif //SHOP_IAUTHBASIC_H
