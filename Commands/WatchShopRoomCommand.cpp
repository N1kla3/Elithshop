//
// Created by nicolas on 18/12/2020.
//

#include "WatchShopRoomCommand.h"

WatchShopRoomCommand::WatchShopRoomCommand(IShop *shop)
{
    widget = new WatchShopRoomWindow(shop);
}

void WatchShopRoomCommand::execute()
{
    widget->show();
}
