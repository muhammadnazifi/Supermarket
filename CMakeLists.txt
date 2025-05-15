cmake_minimum_required(VERSION 3.10)
project(Supermarket)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executables and required source files
add_executable(supermarket
    main.cpp
    item.cpp
    shopping_cart.cpp
    currency.cpp
    bank_account.cpp
)
