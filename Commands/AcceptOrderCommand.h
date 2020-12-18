//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_ACCEPTORDERCOMMAND_H
#define SHOP_ACCEPTORDERCOMMAND_H

#include "../UI/AcceptOrderWindow.h"
#include "ICommand.h"
#include "../IShop.h"

class AcceptOrderCommand : public ICommand
{
public:
    AcceptOrderCommand(IShop* shop);
    virtual void execute() override;

private:
    AcceptOrderWindow* widget;
};


#endif //SHOP_ACCEPTORDERCOMMAND_H
