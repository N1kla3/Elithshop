//
// Created by nicolas on 18/12/2020.
//

#include "DeleteEmpCommand.h"

DeleteEmpCommand::DeleteEmpCommand(IShop *shop)
{
    widget = new DeleteEmpWindow(shop);
}

void DeleteEmpCommand::execute()
{
    widget->show();
}
