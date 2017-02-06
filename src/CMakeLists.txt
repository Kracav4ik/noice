# QTDIR must point to c:/Qt/5.7/mingw53_32/ or similar
message("qtdir is set to '$ENV{QTDIR}' (must be 'c:/Qt/5.7/mingw53_32/' or similar)")
set(CMAKE_PREFIX_PATH "$ENV{QTDIR}")

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

set(NOICE_NAME "noice")

set(NOICE_SOURCES
        main.cpp
        noice.ui
        MainWindow.cpp
        MainWindow.h
        CanvasWidget.cpp
        CanvasWidget.h)

add_executable(${NOICE_NAME} ${NOICE_SOURCES})
target_link_libraries(${NOICE_NAME} Qt5::Widgets Qt5::Core)
