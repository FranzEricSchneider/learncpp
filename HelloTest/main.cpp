#include <iostream>
#include "add.h"
using std::cout;

int main()
{
    cout << "Hello world!" << std::endl;

    int x = 0;
    int y = 10;
    int z = 100;
    cout << "Enter a number: ";
    std::cin >> x;
    y = add(y, z);
    cout << "You entered " << x << std::endl;
    cout << "Double your number is \x6F " << add(x, x) << std::endl;
    z = 2 * z;

    std::cin.ignore(32767, '\n');
    std::cout << "Enter your full name: ";
    std::string my_name;
    std::getline(std::cin, my_name);
    std::cout << "Enter your age: ";
    double age;
    std::cin >> age;
    std::cout << my_name << "\n";
    std::cout << age << "\n";
    std::cout << "Each character in your name contains " <<
                 age / (my_name.length() - 2) << " years";

    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;
}
