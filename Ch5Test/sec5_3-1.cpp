#include <iostream>


void calculate(int num1, int num2, char op)
{
    std::cout << num1 << " " << op << " " << num2 << " is: ";
    switch(op)
    {
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            std::cout << static_cast<double>(num1) / num2;
            break;
        default:
            std::cout << "uncalculable, you gave a bad operator";
            break;
    }
}


//int main()
//{
//    std::cout << "Enter integer 1: ";
//    int num1;
//    std::cin >> num1;
//
//    std::cout << "Enter integer 2: ";
//    int num2;
//    std::cin >> num2;
//
//    std::cout << "Enter a simple operator (+, -, *, /): ";
//    char op;
//    std::cin >> op;
//
//    calculate(num1, num2, op);
//
//    return 0;
//}
