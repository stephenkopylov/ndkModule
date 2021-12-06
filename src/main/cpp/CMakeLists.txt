cmake_minimum_required(VERSION 3.10.2)

project("ndkModule")

find_package(openssl REQUIRED CONFIG)
find_package(mylibrary REQUIRED CONFIG)
find_package(boost REQUIRED CONFIG)
find_package(rapidjson REQUIRED CONFIG)

#set(CMAKE_CXX_FLAGS "-O3 -Wall -Wextra")
#set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra")

add_library(ndkModule
        SHARED
        ndkModule.cpp
        )

find_library(
        log-lib
        log)

target_link_libraries(
        ndkModule
        ${log-lib}
        openssl::crypto
        openssl::ssl
        mylibrary::mylibrary
        boost::boost
        rapidjson::rapidjson
)