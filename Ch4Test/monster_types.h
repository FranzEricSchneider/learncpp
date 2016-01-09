#ifndef MONSTER_TYPES_H_INCLUDED
#define MONSTER_TYPES_H_INCLUDED

enum class MonsterType
{
    ORC,
    KRAKEN,
    DRAGON,
    URUKHAI
};

struct Monster
{
    MonsterType type;
    std::string name;
    int health;
};

#endif // MONSTER_TYPES_H_INCLUDED
