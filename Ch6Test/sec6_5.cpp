#include <iostream>
#include <utility>

//int main()
//{
//    bool earlyTermination{false};
//    const int size{9};
//    int terminationIndex{size - 1};
//    double array[size]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
//
//    for (int i{size - 1}; i >= 0; --i)
//    {
//        bool swapMade{false};
//        for (int j{0}; j < i; ++j)
//        {
//            if (array[j] > array[j+1])
//            {
//                std::swap(array[j], array[j+1]);
//                swapMade = true;
//            }
//        }
//        if (!swapMade)
//        {
//            earlyTermination = true;
//            terminationIndex = (size - 1) - i;
//            break;
//        }
//    }
//
//    if (earlyTermination)
//        std::cout << "Termination early on index " << terminationIndex << "\n";
//
//    for (int i{0}; i < size; ++i)
//        std::cout << array[i] << " ";
//
//    return 0;
//}
