#include <iostream>

void swapTwoVariables(int &n1, int &n2)
{
    int temp{n1};
    n1 = n2;
    n2 = temp;
}

//int main()
//{
//    int num1{10};
//    int num2{20};
//
//    int &n1 = num1;
//    int &n2 = num2;
//
//    std::cout << "num1: " << num1 << ", n1: " << n1 <<
//                 ", num2: " << num2 << ", n2: " << n2 << "\n";
//    swapTwoVariables(n1, n2);
//    std::cout << "num1: " << num1 << ", n1: " << n1 <<
//                 ", num2: " << num2 << ", n2: " << n2 << "\n";
//
//    return 0;
//}
