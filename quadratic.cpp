// Copyright (c) Year Fred All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Tell the user if he can date my grandchild or not.

#include<iostream>
#include<cmath>
#include<string>

int main() {
    float a, b, c, x, y, discriminant;
    std::string a_str, b_str, c_str, choice;

    std::cout << "Enter the value of a\n";
    std::cin >> a_str;
    std::cout << "Enter the value of b\n";
    std::cin >>  b_str;
    std::cout << "Enter the value of c\n";
    std::cin >>  c_str;

    try {
        a = std::stoi(a_str);
        b = std::stoi(b_str);
        c = std::stoi(c_str);

            std::cout << "Is this your equation\n";
            std::cout << a << "x^2 + " << b << "x + " << c << " =0\n";
            std::cin >> choice;
            if (choice == "yes") {
            discriminant = pow(b, 2) - (4 * a * c);
            if (discriminant > 0 && b == 0 && c < 0) {
                x = sqrt(1 * (c / a));
                y = sqrt(1 * (c / a));
                std::cout << "\nthe answers to your equation are " << x <<
                             " and " << y;
            } else if (discriminant > 0) {
                x = (-b + sqrt(discriminant)) / (2 * a);
                y = (-b - sqrt(discriminant)) / (2 * a);
                std::cout << "\nThe answers to your equation are " << x <<
                            " and " << y;
            } else if (discriminant == 0) {
                x = -b / (2 * a);
                std::cout << "\nThe only answer to your equation is " << x;
            } else {
                std::cout << "\nSorry, your equation has no real root"
                             "according to math"
                            " since square root of negative number is"
                            " not in the set of integers.";
                    }
            } else if (choice == "no") {
                std::cout << "Please, feel free to enter new numbers";
            } else {
                std::cout << "\nEnter only yes or no";
            }
    std::cout << "\nThanks for using the code";
} catch (std::invalid_argument) {
    std::cout << "one of your number is not an integer"
                 "Please, enter new ones";
}
std::cout << "Thanks for using the code";
}
