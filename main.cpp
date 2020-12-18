#include <QApplication>
#include "UI/MainWindow.h"
#include "IShopBasic.h"
#include "IEmployControlServiceImpl.h"
#include "IProductControlServiceImpl.h"
#include "IAuthBasic.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    IEmployControlService* employ = new IEmployControlServiceImpl();
    IProductControlService* product = new IProductControlServiceImpl();
    IAuth* auth = new IAuthBasic();
    IShop* shop = new IShopBasic(auth, employ, product);
    MainWindow w(shop);



    w.setAuth(new AuthWindow());
    w.show();
    return a.exec();
}
