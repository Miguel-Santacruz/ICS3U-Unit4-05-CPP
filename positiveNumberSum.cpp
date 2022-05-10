// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program adds positive numbers

#include <iostream>
#include <string>

int main() {
    // This function adds numbers
    std::string amountOfNumbersAsString;
    std::string numberAsString;
    float amountOfNumbersAsFloat;
    float numberAsFloat;
    int answer = 0;
    int number;
    int amountOfNumbers;

    // Process & Output

    std::cout << "How many numbers are you going to add: ";
    std::cin >> amountOfNumbersAsString;
    try {
        amountOfNumbersAsFloat = std::stof(amountOfNumbersAsString);
        amountOfNumbers = std::stoi(amountOfNumbersAsString);
        if (amountOfNumbersAsFloat != amountOfNumbers) {
            std::cout << "Invalid amount of numbers." << std::endl;
        } else if (amountOfNumbers < 0) {
            std::cout << "Invalid amount of numbers." << std::endl;
        } else {
            while (amountOfNumbers > 0) {
                amountOfNumbers = amountOfNumbers - 1;
                std::cout << "Enter number to add: ";
                std::cin >> numberAsString;
                try {
                    numberAsFloat = std::stof(numberAsString);
                    number = std::stoi(numberAsString);
                    if (number != numberAsFloat) {
                        continue;
                    } else if (number < 0) {
                        continue;
                    } else {
                        answer = answer + number;
                    }
                } catch (std::invalid_argument) {
                    continue;
                }
            }
            std::cout << "Sum of just the positive number is: "
            << answer << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid amount of numbers.";
    }


std::cout << "\nDone" << std::endl;
}
