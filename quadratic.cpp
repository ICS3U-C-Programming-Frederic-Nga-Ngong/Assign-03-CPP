// Copyright (c) Year Fred All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Solves quadratic equations.

#include<iostream>
#include<cmath>
#include<string>

int main() {
    float a, b, c, x, y, discriminant;
    std::string a_str, b_str, c_str, choice;

    std::cout << "Hi Mr.user\n"
                 "Hope you are doing fine\n"
                 "This code is used to solve quadratic equation\n";

    // Get the values of a,b and c to th user
    std::cout << "Enter the value of a\n";
    std::cin >> a_str;
    std::cout << "Enter the value of b\n";
    std::cin >>  b_str;
    std::cout << "Enter the value of c\n";
    std::cin >>  c_str;

    // Verify if they are valid integer
    try {
        a = std::stof(a_str);
        b = std::stof(b_str);
        c = std::stof(c_str);

        // a should not be zero or else it will result in a zero division and a bug in the code.
        if (a == 0) {
            std::cout << "a cannot be zero. "
                         "Please, enter a new value";
            } else {
            std::cout << "Is this your equation\n";
            std::cout << a << "x^2 + " << b << "x + " << c << " =0\n";
            std::cin >> choice;
            if (choice == "yes") {

            // Calculate discriminant
            discriminant = pow(b, 2) - (4 * a * c);

            // check different conditions using the discriminant
            if (discriminant > 0 && b == 0 && c < 0) {
                x = sqrt(-1 * (c / a));
                y = sqrt(-1 * (c / a));
                std::cout << "\nthe answers to your equation are +" << x <<
                             " and -" << y;
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
}
    // Tell the user if any of the values entered are not correct ones
} catch (std::invalid_argument) {
    std::cout << "one of your number is not an integer"
                 "Please, enter new ones";
}

std::cout << "\nThanks for using the code";
}
