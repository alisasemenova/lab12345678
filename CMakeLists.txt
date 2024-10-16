cmake_minimum_required(VERSION 3.5.0)
project(lab8zad3 VERSION 0.1.0 LANGUAGES C CXX)

find_package(OpenSSL REQUIRED)
include_directories( ${OPENSSL_INCLUDE_DIR})

find_package(OpenCV REQUIRED)
add_executable(lab8zad3 main.cpp function.cpp)
target_link_libraries(lab8zad3 ${OpenCV_LIBS})
target_link_libraries(lab8zad3 ${OPENSSL_LIBRARIES}) 

