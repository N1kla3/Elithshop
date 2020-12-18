//
// Created by nicolas on 18/12/2020.
//
#pragma once

#ifndef SHOP_STORAGETOSHOPCOMMAND_H
#define SHOP_STORAGETOSHOPCOMMAND_H

#include "ICommand.h"
#include "../UI/FromStorageToShopRoomWindow.h"
#include "../IShop.h"

class StorageToShopCommand : public ICommand
{
public:
    StorageToShopCommand(IShop* shop);
    virtual void execute() override;

private:
    FromStorageToShopRoomWindow* widget;
};


#endif //SHOP_STORAGETOSHOPCOMMAND_H
