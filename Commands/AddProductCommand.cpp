//
// Created by nicolas on 18/12/2020.
//

#include "AddProductCommand.h"

AddProductCommand::AddProductCommand(IShop *shop)
{
    widget = new AddProductWindow(shop);
}

void AddProductCommand::execute()
{
    widget->show();
}
