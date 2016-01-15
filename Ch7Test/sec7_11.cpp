#include <iostream>


int factorial(int number)
{
    if (number <= 1)
        return 1;
    else
        return factorial(number-1) * number;
}


int sumDigits(int number)
{
    if (number < 10)
        return number;
    else
        return sumDigits(number / 10) + (number % 10);
}


//int main()
//{
//    int number{4};
//    std::cout << "Factorial(" << number << ") = " << factorial(number) << "\n";
//
//    number = 93427;
//    std::cout << "sumDigits(" << number << ") = " << sumDigits(number) << "\n";
//    return 0;
//}
