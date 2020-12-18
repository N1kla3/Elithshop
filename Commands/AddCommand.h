//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_ADDCOMMAND_H
#define SHOP_ADDCOMMAND_H

#include "../UI/AddWindow.h"
#include "ICommand.h"
#include "../IShop.h"

class AddCommand : public ICommand
{
public:
    AddCommand(IShop* shop);
    virtual void execute() override;

private:
    AddWindow* widget;
};


#endif //SHOP_ADDCOMMAND_H
