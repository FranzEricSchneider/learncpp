#include <iostream>
#include "ball_position.h"

int main()
{
//    std::cout << "Enter number 1 (can be float): ";
//    double variable1;
//    std::cin >> variable1;
//
//    std::cout << "Enter number 2 (can be float): ";
//    double variable2;
//    std::cin >> variable2;
//
//    std::cout << "Enter simple mathematical operator (*, /, +, -): ";
//    char math_operator;
//    std::cin >> math_operator;
//
//    std::cout << "Your answer: " << variable1 << " " << math_operator <<
//                 " " << variable2 << " = ";
//    if (math_operator == '*') { std::cout << variable1 * variable2; }
//    else if (math_operator == '/') { std::cout << variable1 / variable2; }
//    else if (math_operator == '+') { std::cout << variable1 + variable2; }
//    else if (math_operator == '-') { std::cout << variable1 - variable2; }
//    else { std::cout << "Uncalculable. You made a syntax mistake"; }

    std::cout << "Enter the initial height of the tower in meters: ";
    double tower_height;
    std::cin >> tower_height;

    std::cout << "Ball position at 0s is " << ballPosition(tower_height, 0) << "\n";
    std::cout << "Ball position at 1s is " << ballPosition(tower_height, 1) << "\n";
    std::cout << "Ball position at 2s is " << ballPosition(tower_height, 2) << "\n";
    std::cout << "Ball position at 3s is " << ballPosition(tower_height, 3) << "\n";
    std::cout << "Ball position at 4s is " << ballPosition(tower_height, 4) << "\n";
    std::cout << "Ball position at 5s is " << ballPosition(tower_height, 5) << "\n";

    return 0;
}
