//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_DELPRODUCTCOMMAND_H
#define SHOP_DELPRODUCTCOMMAND_H

#include "ICommand.h"
#include "../UI/DelProductWindow.h"
#include "../IShop.h"

class DelProductCommand : public ICommand
{
public:
    DelProductCommand(IShop* shop);
    virtual void execute() override;

private:
    DelProductWindow* widget;
};


#endif //SHOP_DELPRODUCTCOMMAND_H
