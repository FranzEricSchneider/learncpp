#include <iostream>

struct Fraction
{
    int numerator = 1;
    int denominator = 1;
};

Fraction captureFraction()
{
    Fraction fraction;
    std::cout << "Enter numerator (int): ";
    std::cin >> fraction.numerator;
    std::cout << "Enter denominator (int): ";
    std::cin >> fraction.denominator;
    return fraction;
}

double multiplyFractions(Fraction f1, Fraction f2)
{
    int numerators = f1.numerator * f2.numerator;
    int denominators = f1.denominator * f2.denominator;
    return static_cast<double>(numerators) / denominators;
}

//int main()
//{
//    std::cout << "Fraction 1\n";
//    Fraction f1 = captureFraction();
//    std::cout << "Fraction 2\n";
//    Fraction f2 = captureFraction();
//    std::cout << "f1 * f2 = ";
//    std::cout << multiplyFractions(f1, f2);
//    return 0;
//}
