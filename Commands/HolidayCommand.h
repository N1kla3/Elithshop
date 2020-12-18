//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_HOLIDAYCOMMAND_H
#define SHOP_HOLIDAYCOMMAND_H

#include "ICommand.h"
#include "../UI/HolidayWindow.h"
#include "../IShop.h"

class HolidayCommand : public ICommand
{
public:
    HolidayCommand(IShop* shop);
    virtual void execute() override;

private:
    HolidayWindow* widget;
};


#endif //SHOP_HOLIDAYCOMMAND_H
