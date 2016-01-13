#include <iostream>

void printCharArray(char *charArray)
{
    while (*charArray != '\0')
    {
        std::cout << *charArray;
        ++charArray;
    }
}

//int main()
//{
//    char charArray[] = "Hello world!";
//    printCharArray(charArray);
//    return 0;
//}
