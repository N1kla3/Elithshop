//
// Created by nicolas on 09/12/2020.
//
#pragma once

#ifndef SHOP_MAINWINDOW_H
#define SHOP_MAINWINDOW_H

class ControlEmployWindow;
class ControlProductWindow;
class EmployeesWindow;
class ProductsAmountWindow;
class ProductWindow;
class IShop;

class MainWindow
{
public:
    void showLogin();
    void showMainWindow();

    ControlEmployWindow* employ_control_window = nullptr;
    ControlProductWindow* product_control_window = nullptr;
    EmployeesWindow* employees_window = nullptr;
    ProductsAmountWindow* product_amount = nullptr;
    ProductWindow* product_window = nullptr;
    IShop* shop = nullptr;
};


#endif //SHOP_MAINWINDOW_H
