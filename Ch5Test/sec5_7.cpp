#include <iostream>

int sumTo(int num)
{
    int sum;
    for (int i{0}; i <= num; ++i)
    {
        sum += i;
    }
    return sum;
}

//int main()
//{
//    for (int i{2}; i <= 20; i += 2)
//        std::cout << i << "\n";
//
//    std::cout << "sumTo of 6 is " << sumTo(6);
//
//    return 0;
//}
