#include <cstdint>

int getRandomNumber(int min, int max, uint32_t mersenne_result)
{
    uint32_t maxVal{-1};
    static const double fraction = 1.0 / static_cast<double>(maxVal);
    return static_cast<int>(mersenne_result * fraction * (max - min) + min);
}
