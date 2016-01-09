#include <iostream>

uint8_t method1(uint8_t input)
{
    std::cout << input % 2;
    return (input / 2);
}

uint8_t method2(uint8_t input, uint8_t bar_for_binary)
{
    if (input >= bar_for_binary)
    {
        std::cout << "1";
        return input - bar_for_binary;
    }
    else
    {
        std::cout << "0";
        return input;
    }
}

int main()
{
    std::cout << "Enter an integer between 0-255: ";
    int input;
    std::cin >> input;
    if (input < 0 || input > 255)
    {
        std::cout << "Given number out of bounds";
        return 0;
    }

    std::cout << "You entered " << input << ", which is ";
//    std::cout << "(reversed) ";
//    input = method1(input);
//    input = method1(input);
//    input = method1(input);
//    input = method1(input);
//    std::cout << " ";
//    input = method1(input);
//    input = method1(input);
//    input = method1(input);
//    input = method1(input);
    input = method2(input, 128);
    input = method2(input, 64);
    input = method2(input, 32);
    input = method2(input, 16);
    std::cout << " ";
    input = method2(input, 8);
    input = method2(input, 4);
    input = method2(input, 2);
    input = method2(input, 1);
    std::cout << " in binary";

    return 0;
}
