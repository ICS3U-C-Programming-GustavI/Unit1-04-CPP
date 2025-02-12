// Copyright (c) 2025 Gustav I All rights reserved.
// Created by Gustav I
// Created On February 12, 2025
// This program does basic math in C++.

#include <cmath>
#include <iostream>

int main() {
    std::cout << "9 + 2 = " << (9 + 2) << std::endl;
    std::cout << "7 - 2 = " << (7 - 2) << std::endl;
    std::cout << "4 / 2 = " << (4 / 2) << std::endl;
    std::cout << "4 + 4 / 2 = " << (4 + 4 / 2) << std::endl;
    std::cout << "3 + 4 * 2 = " << (3 + 4 * 2) << std::endl;
    std::cout << "5 + 2^3 (incorrect) = " << (5 + (2 ^ 3)) << std::endl;
    std::cout << "5 + pow(2, 3) = " << (5 + pow(2, 3)) << std::endl;

    return 0;
}
