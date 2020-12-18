//
// Created by nicolas on 18/12/2020.
//

#include "GiveMoneyCommand.h"

GiveMoneyCommand::GiveMoneyCommand(IShop *shop)
{
    widget = new GiveMoneyWindow(shop);
}

void GiveMoneyCommand::execute()
{
    widget->show();
}
