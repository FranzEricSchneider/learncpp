#include <iostream>

// array is the array to search over.
// target is the value we're trying to determine exists or not.
// min is the index of the lower bounds of the array we're searching.
// max is the index of the upper bounds of the array we're searching.
// binarySearch() should return the index of the target element if the target is found, -1 otherwise

// Iterative
//int binarySearch(const int *array, const int target, int min, int max)
//{
//    while (min <= max)
//    {
//        int mid = min + (max - min) / 2;
//        if (array[mid] == target)
//            return mid;
//        else if (array[mid] < target)
//            min = mid + 1;
//        else
//            max = mid - 1;
//    }
//    return -1;
//}

//// Recursive
int binarySearch(const int *array, const int target, int min, int max)
{
    int mid = min + (max - min) / 2;
    if (array[mid] == target)
        return mid;
    else if (min == max)
        return -1;
    else if (array[mid] < target)
        return binarySearch(array, target, mid+1, max);
    else
        return binarySearch(array, target, min, mid-1);
}

int main()
{
    int array[] = { 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };

    // We're going to test a bunch of values to see if they produce the expected results
    const int numTestValues = 9;
    int testValues[numTestValues] = { 0, 3, 12, 13, 22, 26, 43, 44, 49 };
    int expectedValues[numTestValues] = { -1, 0, 3, -1, -1, 8, -1, 13, -1 };

    for (int count=0; count < numTestValues; ++count)
    {
        // See if our test value is in the array
        int index = binarySearch(array, testValues[count], 0, 14);
        if (index == expectedValues[count])
             std::cout << "test value " << testValues[count] << " passed!\n";
        else
             std::cout << "test value " << testValues[count] << " failed with: " << index << "\n";
    }

    return 0;
}
