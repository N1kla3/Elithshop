//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_GIVEMONEYCOMMAND_H
#define SHOP_GIVEMONEYCOMMAND_H

#include "ICommand.h"
#include "../UI/GiveMoneyWindow.h"
#include "../IShop.h"

class GiveMoneyCommand : public ICommand
{
public:
    GiveMoneyCommand(IShop* shop);
    virtual void execute() override;

private:
    GiveMoneyWindow* widget;
};


#endif //SHOP_GIVEMONEYCOMMAND_H
