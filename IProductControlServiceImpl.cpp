//
// Created by nicolas on 06/12/2020.
//

#include "IProductControlServiceImpl.h"
#include "Producer.h"

std::vector<Product> IProductControlServiceImpl::getProductsFromStorage()
{
    return std::vector<Product>();
}

std::vector<Product> IProductControlServiceImpl::getProductsFromShoproom()
{
    return std::vector<Product>();
}

void
IProductControlServiceImpl::addProductToStorage(const string &string1, const string &string2, const string &string3,
                                                const string &string4, const string &string5, const string &string6,
                                                const string &string7, const string &string8)
{

}

void IProductControlServiceImpl::fromStorageToShoproom(Product *product)
{

}

void IProductControlServiceImpl::editProduct(const string &string1, const string &string2, const string &string3,
                                             const string &string4, const string &string5, const string &string6,
                                             const string &string7, const string &string8)
{

}

void IProductControlServiceImpl::orderFromProducer(Product product, int i, Producer producer)
{

}

void IProductControlServiceImpl::acceptFromProducer(Product product, int i, Producer producer)
{

}

void IProductControlServiceImpl::sellProduct(Product product, int i)
{

}

std::vector<Product> IProductControlServiceImpl::listExpiredProducts()
{
    return std::vector<Product>();
}
