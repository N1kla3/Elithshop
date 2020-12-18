//
// Created by nicolas on 18/12/2020.
//

#include "ShowEmpInfoCommand.h"

ShowEmpInfoCommand::ShowEmpInfoCommand(IShop *shop)
{
    widget = new ShowEmpInfoWindow(shop);
}

void ShowEmpInfoCommand::execute()
{
    widget->show();
}
