//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_SHOWEMPINFOCOMMAND_H
#define SHOP_SHOWEMPINFOCOMMAND_H

#include "ICommand.h"
#include "../UI/ShowEmpInfoWindow.h"
#include "../IShop.h"

class ShowEmpInfoCommand
{
public:
    ShowEmpInfoCommand(IShop* shop);
    virtual void execute() override;

private:
    ShowEmpInfoWindow* widget;
};


#endif //SHOP_SHOWEMPINFOCOMMAND_H
