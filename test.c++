#include <iostream>
#include <limits> // Include for std::numeric_limits
#include <conio.h>

int main() {
    double n1, n2;
    char t;
    double add, sub, multi, divide;
    bool valid = false;

    // Input the numbers
    std::cout << "Enter the first number: ";
    std::cin >> n1;
    std::cout << "Enter the second number: ";
    std::cin >> n2;

    // Clear input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while (!valid) {
        // Prompt the user to choose an operation
        std::cout << "What operation do you want to perform?" << std::endl;
        std::cout << "Addition [+]" << std::endl;
        std::cout << "Subtraction [-]" << std::endl;
        std::cout << "Multiplication [*]" << std::endl;
        std::cout << "Division [/] [NOTE: THE BIGGER NUMBER WILL BE PLACED IN FRONT DURING OPERATION]" << std::endl;
        std::cout << "Enter Your Choice: ";
        std::cin >> t;

        // Ask the user if the operation is correct
        char c;
        std::cout << "Is this the correct operation? [Y/N]: ";
        std::cin >> c;

        // If the user confirms the correctness of the operation, set valid to true to exit the loop
        if (c == 'Y' || c == 'y') {
            valid = true;

            // Perform the selected operation
            switch (t) {
                case '+':
                    add = n1 + n2;
                    std::cout << "Addition: " << add << std::endl;
                    break;

                case '-':
                    sub = n1 - n2;
                    std::cout << "Subtraction: " << sub << std::endl;
                    break;

                case '*':
                    multi = n1 * n2;
                    std::cout << "Multiplication: " << multi << std::endl;
                    break;

                case '/':
                    // Check if the divisor is not zero to avoid division by zero error
                    if (n2 != 0) {
                        divide = n1 / n2;
                        std::cout << "Division: " << divide << std::endl;
                    } else {
                        std::cout << "Error: Division by zero!" << std::endl;
                    }
                    break;

                default:
                    std::cout << "Invalid Operation!" << std::endl;
                    valid = false; // Ensure the loop continues if the operation was invalid
                    break;
            }

        } else {
            std::cout << "Please choose the operation again." << std::endl;
        }

        // Clear input buffer again
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    getch(); // Wait for user input before exiting
    return 0;
}