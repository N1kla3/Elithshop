//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_WATCHSHOPROOMCOMMAND_H
#define SHOP_WATCHSHOPROOMCOMMAND_H

#include "ICommand.h"
#include "../UI/WatchShopRoomWindow.h"
#include "../IShop.h"

class WatchShopRoomCommand : public  ICommand
{
public:
    WatchShopRoomCommand(IShop* shop);
    virtual void execute() override;

private:
    WatchShopRoomWindow* widget;
};


#endif //SHOP_WATCHSHOPROOMCOMMAND_H
