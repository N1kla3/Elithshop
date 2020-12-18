//
// Created by nicolas on 18/12/2020.
//

#include "HolidayCommand.h"

HolidayCommand::HolidayCommand(IShop *shop)
{
    widget = new HolidayWindow(shop);
}

void HolidayCommand::execute()
{
    widget->show();
}