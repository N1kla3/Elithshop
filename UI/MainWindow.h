//
// Created by nicolas on 09/12/2020.
//
#pragma once

#ifndef SHOP_MAINWINDOW_H
#define SHOP_MAINWINDOW_H

#include <QStackedWidget>
#include <QWidget>
#include <QMainWindow>
#include "AuthWindow.h"

class ControlEmployWindow;
class ControlProductWindow;
class EmployeesWindow;
class ProductsAmountWindow;
class ProductWindow;
class IShop;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(IShop* shop, QWidget *parent = nullptr);
    void showLogin();
    void showMainWindow( );
    void setEmployControl( ControlEmployWindow* employ_control_window);
    void setProductControl(ControlProductWindow* product_control_window);
    void setProductAmount(ProductsAmountWindow* product_amount );
    void setAuth(AuthWindow* auth );

    QStackedWidget* m_Widget;
    QWidget* m_MainWidget;
    ControlEmployWindow* employ_control_window = nullptr;
    ControlProductWindow* product_control_window = nullptr;
    ProductsAmountWindow* product_amount = nullptr;
    AuthWindow* auth = nullptr;
    IShop* shop = nullptr;
};


#endif //SHOP_MAINWINDOW_H
