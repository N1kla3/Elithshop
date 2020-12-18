//
// Created by nicolas on 09/12/2020.
//

#include "MainWindow.h"

MainWindow::MainWindow(IShop* shop, QWidget *parent) :
    QMainWindow(parent),
    shop(shop)
{
    this->setFixedSize(700, 500);

    m_Widget = new QStackedWidget;
    setCentralWidget(m_Widget);
}

void MainWindow::showLogin()
{

}

void MainWindow::showMainWindow()
{
    m_Widget->addWidget(auth);
    m_Widget->setCurrentIndex(0);
}

void MainWindow::setEmployControl(ControlEmployWindow *employ_control_window)
{
    this->employ_control_window = employ_control_window;
}

void MainWindow::setProductControl(ControlProductWindow *product_control_window)
{
    this->product_control_window = product_control_window;
}

void MainWindow::setProductAmount(ProductsAmountWindow *product_amount)
{
    this->product_amount = product_amount;
}

void MainWindow::setAuth(AuthWindow *auth)
{
    this->auth = auth;
}
