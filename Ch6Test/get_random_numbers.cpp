#include <cstdint>

#include "get_random_numbers.h"


int getRandomNumber(int min, int max)
{
    std::random_device rd;
    std::mt19937 mersenne(rd());
    uint32_t maxVal{-1};
    static const double fraction = 1.0 / static_cast<double>(maxVal);
    return static_cast<int>(mersenne() * fraction * (max - min) + min);
}
