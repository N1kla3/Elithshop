//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_WATCHSTORAGECOMMAND_H
#define SHOP_WATCHSTORAGECOMMAND_H

#include "ICommand.h"
#include "../UI/WatchStorageWindow.h"
#include "../IShop.h"

class WatchStorageCommand : public ICommand
{
public:
    WatchStorageCommand(IShop* shop);
    virtual void execute() override;

private:
    WatchStorageWindow* widget;
};


#endif //SHOP_WATCHSTORAGECOMMAND_H
