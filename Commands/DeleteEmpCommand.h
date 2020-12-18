//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_DELETEEMPCOMMAND_H
#define SHOP_DELETEEMPCOMMAND_H

#include "ICommand.h"
#include "../UI/DeleteEmpWindow.h"
#include "../IShop.h"

class DeleteEmpCommand : public ICommand
{
public:
    DeleteEmpCommand(IShop* shop);
    virtual void execute() override;

private:
    DeleteEmpWindow* widget;
};


#endif //SHOP_DELETEEMPCOMMAND_H
