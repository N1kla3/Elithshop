//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_PRODUCT_H
#define SHOP_PRODUCT_H

#include <string>

using std::string;

struct Product
{
    string id;
    string name;
    int amount_on_storage;
    int amount_on_shoproom;
    float unit_cost;
    float sum_unit_cost;
    float sell_cost;
    float sum_sell_cost;
    string date_of_creation;
    string type_by_shelf_life;
};


#endif //SHOP_PRODUCT_H
