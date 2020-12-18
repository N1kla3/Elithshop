//
// Created by nicolas on 18/12/2020.
//

#include "AcceptOrderCommand.h"

AcceptOrderCommand::AcceptOrderCommand(IShop *shop)
{
    widget = new AcceptOrderWindow(shop);
}

void AcceptOrderCommand::execute()
{
    widget->show();
}
