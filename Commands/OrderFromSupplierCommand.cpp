//
// Created by nicolas on 18/12/2020.
//

#include "OrderFromSupplierCommand.h"

OrderFromSupplierCommand::OrderFromSupplierCommand(IShop *shop)
{
    widget = new OrderFromSupplierWindow(shop);
}

void OrderFromSupplierCommand::execute()
{
    widget->show();
}
