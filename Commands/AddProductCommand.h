//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_ADDPRODUCTCOMMAND_H
#define SHOP_ADDPRODUCTCOMMAND_H

#include "ICommand.h"
#include "../UI/AddProductWindow.h"
#include "../IShop.h"

class AddProductCommand : public ICommand
{
public:
    AddProductCommand(IShop* shop);
    virtual void execute() override;

private:
    AddProductWindow* widget;
};


#endif //SHOP_ADDPRODUCTCOMMAND_H
