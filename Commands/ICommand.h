//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_ICOMMAND_H
#define SHOP_ICOMMAND_H


class ICommand
{
public:
    virtual void execute() = 0;
};


#endif //SHOP_ICOMMAND_H
