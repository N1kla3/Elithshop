//
// Created by nicolas on 18/12/2020.
//

#include "AddCommand.h"

AddCommand::AddCommand(IShop *shop)
{
    widget = new AddWindow(shop);

}

void AddCommand::execute()
{
    widget->show();
}
