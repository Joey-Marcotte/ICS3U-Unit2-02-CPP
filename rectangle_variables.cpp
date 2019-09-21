// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: Sept 2019
// This program calculates the area and perimeter of a rectangle
// with user input

#include <iostream>

int main() {
    // this function calculates area adn perimeter of a rectangle
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of rectangle (mm): ";
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm" << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm" << std::endl;
}
