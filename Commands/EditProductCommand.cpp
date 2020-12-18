//
// Created by nicolas on 18/12/2020.
//

#include "EditProductCommand.h"

EditProductCommand::EditProductCommand(IShop *shop)
{
    widget = new EditProduct(shop);
}

void EditProductCommand::execute()
{
    widget->show();
}
