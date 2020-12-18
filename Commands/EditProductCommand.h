//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_EDITPRODUCTCOMMAND_H
#define SHOP_EDITPRODUCTCOMMAND_H

#include "ICommand.h"
#include "../UI/EditProduct.h"
#include "../IShop.h"

class EditProductCommand : public ICommand
{
public:
    EditProductCommand(IShop* shop);
    virtual void execute() override;

private:
    EditProduct* widget;
};


#endif //SHOP_EDITPRODUCTCOMMAND_H
