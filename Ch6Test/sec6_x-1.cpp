#include <iostream>

enum class ItemType
{
    HEALTH_POTION,
    TORCH,
    FLINT,
    BOW,
    ARROW,
    NUM_ITEMS
};

int countTotalItems(const int *itemArray, const int arrayLength)
{
    int sum{0};
    for (int i{0}; i < arrayLength; ++i)
    {
        sum += itemArray[i];
    }
    return sum;
}

//int main()
//{
//    const int arrayLength = static_cast<int>(ItemType::NUM_ITEMS);
//    int itemArray[arrayLength]{20, 2, 1, 1, 10};
//    std::cout << "Total items: " << countTotalItems(itemArray, arrayLength) << "\n";
//    return 0;
//}
