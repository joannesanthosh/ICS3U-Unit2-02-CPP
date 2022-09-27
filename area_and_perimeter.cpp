// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This program calculates the area and perimeter of a rectangle

#include <cmath>
#include <iostream>

int main() {
    // This function calculates the area and perimeter
    int lengthOfRectangle;
    int widthOfRectangle;
    double areaOfRectangle;
    double perimeterOfRectangle;

    // input
    std::cout << "Enter the length of the rectangle (mm): ";
    std::cin >> lengthOfRectangle;
    
    std::cout << "Enter the width of the rectangle (mm): ";
    std::cin >> widthOfRectangle;

    // process
    areaOfRectangle = (lengthOfRectangle * widthOfRectangle);
    perimeterOfRectangle = 2 * (lengthOfRectangle + widthOfRectangle);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << areaOfRectangle << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeterOfRectangle << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}