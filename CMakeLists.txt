cmake_minimum_required(VERSION 3.24)
project(wavfile)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(wavfile
        wavfile.cpp
        wavfile.h epoch_tracker_main.cc)


#set(CMAKE_PREFIX_PATH "~/Qt5.12.10/5.12.10/gcc_64/")
find_package( Qt5Core REQUIRED )
find_package(Qt5Multimedia REQUIRED)
qt5_use_modules(wavfile Multimedia Core)

#
#find_package(Qt6 REQUIRED COMPONENTS Core)
#target_link_libraries(g PRIVATE Qt5::Core)