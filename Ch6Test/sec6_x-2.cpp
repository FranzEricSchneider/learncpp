#include <iostream>

std::string* getNames(int numNames)
{
    std::string *nameArray = new std::string[numNames]{};
    for (int i{0}; i < numNames; ++i)
    {
        std::cout << "Enter Name # " << i+1 << ": ";
        std::getline(std::cin, nameArray[i]);
    }
    return nameArray;
}

std::string* sortNames(std::string *nameArray, const int numNames)
{
    for (int i{0}; i < numNames; ++i)
    {
        int stopIndex{numNames - i};
        for (int j{0}; j < (stopIndex - 1); ++j)
        {
            if (nameArray[j] > nameArray[j+1])
                std::swap(nameArray[j], nameArray[j+1]);
        }
    }
    return nameArray;
}

void printNames(const std::string *nameArray, const int numNames)
{
    std::cout << "Names:\n";
    for (int i{0}; i < numNames; ++i)
    {
        std::cout << "Name #" << i+1 << ": " << nameArray[i] << "\n";
    }
}

//int main()
//{
//    std::cout << "How many names would you like to enter? ";
//    int numNames;
//    std::cin >> numNames;
//    std::cin.ignore(32767, '\n');
//
//    std::string *nameArray = getNames(numNames);
//    sortNames(nameArray, numNames);
//    printNames(nameArray, numNames);
//
//    delete[] nameArray;
//    return 0;
//}
