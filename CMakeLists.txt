cmake_minimum_required(VERSION 3.17)
project(shop)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 5)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Gui Qt5::Widgets)

add_executable(${PROJECT_NAME} main.cpp Employee.h IEmployControlService.cpp IEmployControlService.h IEmployControlServiceImpl.cpp IEmployControlServiceImpl.h Product.h IProductControlService.cpp IProductControlService.h IProductControlServiceImpl.cpp IProductControlServiceImpl.h IShop.h IShopBasic.cpp IShopBasic.h IAuth.h IAuthBasic.cpp IAuthBasic.h UI/ControlProductWindow.cpp UI/ControlProductWindow.h UI/ControlEmployWindow.cpp UI/ControlEmployWindow.h UI/EmployeesWindow.cpp UI/EmployeesWindow.h UI/ProductWindow.cpp UI/ProductWindow.h UI/ProductsAmountWindow.cpp UI/ProductsAmountWindow.h UI/MainWindow.cpp UI/MainWindow.h UI/AuthWindow.cpp UI/AuthWindow.h UI/AddWindow.h UI/AddWindow.cpp UI/DeleteEmpWindow.cpp UI/DeleteEmpWindow.h UI/HolidayWindow.cpp UI/HolidayWindow.h UI/EditEmpWindow.cpp UI/EditEmpWindow.h UI/ShowEmpInfoWindow.cpp UI/ShowEmpInfoWindow.h UI/GiveMoneyWindow.cpp UI/GiveMoneyWindow.h UI/WatchStorageWindow.cpp UI/WatchStorageWindow.h UI/WatchShopRoomWindow.cpp UI/WatchShopRoomWindow.h UI/AddProductWindow.cpp UI/AddProductWindow.h UI/FromStorageToShopRoomWindow.cpp UI/FromStorageToShopRoomWindow.h UI/OrderFromSupplierWindow.cpp UI/OrderFromSupplierWindow.h UI/AcceptOrderWindow.cpp UI/AcceptOrderWindow.h UI/DelProductWindow.cpp UI/DelProductWindow.h UI/EditProduct.cpp UI/EditProduct.h UI/ShowOverdueProductWindow.cpp UI/ShowOverdueProductWindow.h Commands/ICommand.cpp Commands/ICommand.h Commands/AcceptOrderCommand.cpp Commands/AcceptOrderCommand.h Commands/AddProductCommand.cpp Commands/AddProductCommand.h Commands/AddCommand.cpp Commands/AddCommand.h Commands/DeleteEmpCommand.cpp Commands/DeleteEmpCommand.h Commands/DelProductCommand.cpp Commands/DelProductCommand.h Commands/EditEmpCommand.cpp Commands/EditEmpCommand.h Commands/EditProductCommand.cpp Commands/EditProductCommand.h Commands/StorageToShopCommand.cpp Commands/StorageToShopCommand.h Commands/GiveMoneyCommand.cpp Commands/GiveMoneyCommand.h)


find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})
