//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_IPRODUCTCONTROLSERVICE_H
#define SHOP_IPRODUCTCONTROLSERVICE_H


#include <vector>
#include "Product.h"
#include "Producer.h"

class IProductControlService
{
public:
    virtual std::vector<Product> getProductsFromStorage() = 0;
    virtual std::vector<Product> getProductsFromShoproom() = 0;
    virtual void addProductToStorage(const string&, const string&,const string&,const string&,
                                    const string&,const string&,const string&,const string&) = 0;
    virtual void fromStorageToShoproom(Product* product) = 0;
    virtual void editProduct( const string&, const string&,const string&,const string&,
                              const string&,const string&,const string&,const string&) = 0;
    virtual void orderFromProducer(Product, int, Producer) = 0;
    virtual void acceptFromProducer(Product, int, Producer) = 0;
    virtual void sellProduct(Product, int) = 0;
    virtual std::vector<Product> listExpiredProducts() = 0;
};


#endif //SHOP_IPRODUCTCONTROLSERVICE_H
