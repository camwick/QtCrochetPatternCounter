cmake_minimum_required(VERSION 3.16)

project(CrochetPatternCounter VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 REQUIRED COMPONENTS Quick)


qt_add_executable(appCrochetPatternCounter
    main.cpp
    qmlObjects/navigation.h qmlObjects/navigation.cpp
    qmlObjects/selectFile.h qmlObjects/selectFile.cpp
    qmlObjects/inputFields.h qmlObjects/inputFields.cpp
    qmlObjects/countButton.h qmlObjects/countButton.cpp
)

qt_add_qml_module(appCrochetPatternCounter
    URI CrochetPatternCounter
    VERSION 1.0
    QML_FILES qml.qrc
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
