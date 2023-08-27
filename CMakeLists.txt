cmake_minimum_required(VERSION 3.16)

project(CrochetPatternCounter VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 REQUIRED COMPONENTS Quick)

qt_add_resources(RESOURCE_FILES qml.qrc)

qt_add_executable(appCrochetPatternCounter
    main.cpp
    ${RESOURCE_FILES}
    qmlObjects/CounterNav.h qmlObjects/CounterNav.cpp
    qmlObjects/CrochetPatternCounter.h qmlObjects/CrochetPatternCounter.cpp
    qmlObjects/LeftDisplayArea.h qmlObjects/LeftDisplayArea.cpp
    qmlObjects/RightDisplayArea.h qmlObjects/RightDisplayArea.cpp
)

set_target_properties(appCrochetPatternCounter PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appCrochetPatternCounter
    PRIVATE Qt6::Quick
)

install(TARGETS appCrochetPatternCounter
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
