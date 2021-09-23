// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program finds the volume of a cone

#include <iostream>
#include <cmath>

int main() {
    // his function calculates the volume
    int radius;
    int height;
    double volume;

    // input
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;
    std::cout << "Enter the height (mm): ";
    std::cin >> height;

    // process
    volume = M_PI * pow(radius, 2) * (height / 3.0);

    // output
    std::cout << std::endl;
    std::cout << "The volume of the cone is: " <<
        volume << " mm³. " << std::ends;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::ends;
}
