//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_SHOWOVERDUEPRODUCTCOMMAND_H
#define SHOP_SHOWOVERDUEPRODUCTCOMMAND_H

#include "ICommand.h"
#include "../UI/ShowOverdueProductWindow.h"
#include "../IShop.h"

class ShowOverdueProductCommand : public ICommand
{
public:
    ShowOverdueProductCommand(IShop* shop);
    virtual void execute() override;

private:
    ShowOverdueProductWindow* widget;
};


#endif //SHOP_SHOWOVERDUEPRODUCTCOMMAND_H
