cmake_minimum_required(VERSION 3.19)
project(Tutorial_1 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(Tutorial_1
    main.cpp
    Task.h Task.cpp
    Taskmanager.h Taskmanager.cpp
)

target_link_libraries(Tutorial_1
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS Tutorial_1
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
