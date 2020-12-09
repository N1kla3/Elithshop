//
// Created by nicolas on 09/12/2020.
//
#pragma once

#ifndef SHOP_IEMPLOYCOMMAND_H
#define SHOP_IEMPLOYCOMMAND_H


class IEmployCommand
{
public:
    virtual void execute(IEmployControlService* service) = 0;
};


#endif //SHOP_IEMPLOYCOMMAND_H
