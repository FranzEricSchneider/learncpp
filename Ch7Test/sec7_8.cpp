#include <iostream>

typedef int (*integerFunction)(int, int);

int getInteger()
{
    std::cout << "Enter an integer: ";
    int integer;
    std::cin >> integer;
    return integer;
}

char getOperator()
{
    std::cout << "\nEnter an operator (+,-,*,/): ";
    char op;
    std::cin >> op;
    return op;
}

int add(int x, int y)      { return x + y; }
int subtract(int x, int y) { return x - y; }
int multiply(int x, int y) { return x * y; }
int divide(int x, int y)   { return x / y; }

struct integerStruct
{
    char mathOperator;
    integerFunction intFunc;
};

static integerStruct integerArray[]{ {'+', add}, {'-', subtract},
                                     {'*', multiply}, {'/', divide} };

integerFunction getIntegerFunction(char op)
{
    for (auto operation: integerArray)
    {
        if (op == operation.mathOperator)
            return operation.intFunc;
    }
    return add;
}

//int main()
//{
//    int x = getInteger();
//    int y = getInteger();
//    char mathOperator = getOperator();
//    std::cout << getIntegerFunction(mathOperator)(x, y);
//
//    return 0;
//}
