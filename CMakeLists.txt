cmake_minimum_required(VERSION 3.17)
project(shop)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 5)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Gui Qt5::Widgets)

add_executable(${PROJECT_NAME} main.cpp Employee.h IEmployControlService.cpp IEmployControlService.h IEmployControlServiceImpl.cpp IEmployControlServiceImpl.h Product.h IProductControlService.cpp IProductControlService.h IProductControlServiceImpl.cpp IProductControlServiceImpl.h IShop.h IShopBasic.cpp IShopBasic.h IAuth.h IAuthBasic.cpp IAuthBasic.h Commands/IEmployCommand.h Commands/IProductCommand.h UI/ControlProductWindow.cpp UI/ControlProductWindow.h UI/ControlEmployWindow.cpp UI/ControlEmployWindow.h UI/EmployeesWindow.cpp UI/EmployeesWindow.h UI/ProductWindow.cpp UI/ProductWindow.h UI/ProductsAmountWindow.cpp UI/ProductsAmountWindow.h UI/MainWindow.cpp UI/MainWindow.h)


find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})
