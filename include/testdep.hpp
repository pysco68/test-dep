#pragma once
#include <iostream>
#include <string>
#include <termcolor/termcolor.hpp>

namespace pysco68 {

    inline void hello_(const std::string &who) {

        std::cout << "Hello " << termcolor::red << who << termcolor::reset << std::endl;


    }

}