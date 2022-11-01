// Copyright (c) 2022 Venika Sem All rights reserved.
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program checks if user can date the grandmother's grandchildren

#include <iostream>
#include <string>

int main() {
    // creating variables

    std::string userAgeAsString;
    int userAgeAsNumber;

    // input
    std::cout << "Welcome! Please enter your age: ";
    std::cin >> userAgeAsString;

    // process and output
    try {
        userAgeAsNumber = std::stoi(userAgeAsString);
        if (userAgeAsNumber >= 25 && userAgeAsNumber <= 40) {
            std::cout << "\nYou are an acceptable age!."
                      << std::endl;
        } else {
            std::cout << "\nYou are NOT an acceptable age!"
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid entry, "
                  << userAgeAsString << " is not an integer.";
    }
    std::cout << "\n\nDone.";
}
