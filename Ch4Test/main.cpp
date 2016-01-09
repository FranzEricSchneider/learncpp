#include <iostream>
#include "monster_types.h"

void printMonster(Monster m)
{
    std::string type{"Alien"};
    if (m.type == MonsterType::ORC)
        type = "an Orc";
    else if (m.type == MonsterType::KRAKEN)
        type = "a Kraken";
    else if (m.type == MonsterType::DRAGON)
        type = "a Dragon";
    else if (m.type == MonsterType::URUKHAI)
        type = "an Uruk-Hai";
    std::cout << "The monster " << m.name << " is " <<
                 type << " and has " << m.health << " health!\n";
}

int main()
{
    Monster m1{MonsterType::URUKHAI, "Minnie", 47};
    Monster m2{MonsterType::KRAKEN, "Gorgl", 121};
    Monster m3{MonsterType::DRAGON, "Chomper", 40};
    printMonster(m1);
    printMonster(m2);
    printMonster(m3);
    return 0;
}
