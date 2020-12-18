//
// Created by nicolas on 18/12/2020.
//

#include "ShowOverdueProductCommand.h"

ShowOverdueProductCommand::ShowOverdueProductCommand(IShop *shop)
{
    widget = new ShowOverdueProductWindow(shop);
}

void ShowOverdueProductCommand::execute()
{
    widget->show();
}
