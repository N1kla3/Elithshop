//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_EDITEMPCOMMAND_H
#define SHOP_EDITEMPCOMMAND_H

#include "ICommand.h"
#include "../UI/EditEmpWindow.h"
#include "../IShop.h"

class EditEmpCommand : public ICommand
{
public:
    EditEmpCommand(IShop* shop);
    virtual void execute() override;

private:
    EditEmpWindow* widget;
};


#endif //SHOP_EDITEMPCOMMAND_H
