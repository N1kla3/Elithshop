//
// Created by nicolas on 18/12/2020.
//

#include "EditEmpCommand.h"

EditEmpCommand::EditEmpCommand(IShop *shop)
{
    widget = new EditEmpWindow(shop);
}

void EditEmpCommand::execute()
{
    widget->show();
}
