//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_COMMAND_H
#define SHOP_COMMAND_H


class Command
{
public:
    std::string name;
    virtual void execute() = 0;
};


#endif //SHOP_COMMAND_H
