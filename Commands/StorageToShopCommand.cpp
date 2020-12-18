//
// Created by nicolas on 18/12/2020.
//

#include "StorageToShopCommand.h"

StorageToShopCommand::StorageToShopCommand(IShop *shop)
{
    widget = new FromStorageToShopRoomWindow(shop);
}

void StorageToShopCommand::execute()
{
    widget->show();
}
