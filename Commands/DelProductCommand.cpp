//
// Created by nicolas on 18/12/2020.
//

#include "DelProductCommand.h"

DelProductCommand::DelProductCommand(IShop *shop)
{
    widget = new DelProductWindow(shop);
}

void DelProductCommand::execute()
{
    widget->show();
}
