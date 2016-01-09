#include <iostream>

enum class Animal
{
    BUFFALO,
    CAT,
    CHICKEN,
    DOG,
    LION,
    OSTRICH
};

int numLegs(Animal animal)
{
    switch(animal)
    {
        case Animal::BUFFALO:
        case Animal::CAT:
        case Animal::DOG:
        case Animal::LION:
            return 4;
        case Animal::CHICKEN:
        case Animal::OSTRICH:
            return 2;
        default:
            std::cout << "Didn't recognize that animal";
            return -1;
    }
}

std::string name(Animal animal)
{
    switch(animal)
    {
        case Animal::BUFFALO:
            return "Buffalo";
        case Animal::CAT:
            return "Cat";
        case Animal::DOG:
            return "Dog";
        case Animal::LION:
            return "Lion";
        case Animal::CHICKEN:
            return "Chicken";
        case Animal::OSTRICH:
            return "Ostrich";
        default:
            std::cout << "Didn't recognize that animal";
            return "Unknown";
    }
}


//int main()
//{
//    Animal a1 = Animal::OSTRICH;
//    Animal a2 = Animal::LION;
//
//    std::cout << "Animal 1 has " << numLegs(a1) << " legs and is an " << name(a1) << "\n";
//    std::cout << "Animal 2 has " << numLegs(a2) << " legs and is an " << name(a2) << "\n";
//
//    return 0;
//}
