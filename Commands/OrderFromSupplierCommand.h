//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_ORDERFROMSUPPLIERCOMMAND_H
#define SHOP_ORDERFROMSUPPLIERCOMMAND_H

#include "ICommand.h"
#include "../UI/OrderFromSupplierWindow.h"
#include "../IShop.h"

class OrderFromSupplierCommand : public ICommand
{
public:
    OrderFromSupplierCommand(IShop* shop);
    virtual void execute() override;

private:
    OrderFromSupplierWindow* widget;
};


#endif //SHOP_ORDERFROMSUPPLIERCOMMAND_H
