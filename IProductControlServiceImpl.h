//
// Created by nicolas on 06/12/2020.
//
#pragma once

#ifndef SHOP_IPRODUCTCONTROLSERVICEIMPL_H
#define SHOP_IPRODUCTCONTROLSERVICEIMPL_H

#include "IProductControlService.h"
#include "Producer.h"

class IProductControlServiceImpl : public IProductControlService
{
public:
    std::vector<Product> getProductsFromStorage() override;
    std::vector<Product> getProductsFromShoproom() override;
    void addProductToStorage(const string &string1, const string &string2, const string &string3, const string &string4,
                             const string &string5, const string &string6, const string &string7,
                             const string &string8) override;
    void fromStorageToShoproom(Product *product) override;
    void editProduct(const string &string1, const string &string2, const string &string3, const string &string4,
                     const string &string5, const string &string6, const string &string7,
                     const string &string8) override;
    void orderFromProducer(Product product, int i, Producer producer) override;
    void acceptFromProducer(Product product, int i, Producer producer) override;
    void sellProduct(Product product, int i) override;
    std::vector<Product> listExpiredProducts() override;


    std::vector<Product>  shop_room;
    std::vector<Product>  storage;
};


#endif //SHOP_IPRODUCTCONTROLSERVICEIMPL_H
