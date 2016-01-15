#include <cstdint>
#include <iostream>


class RGBA
{
private:
    uint8_t m_red{}, m_green{}, m_blue{}, m_alpha{255};

public:
    RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255):
        m_red{red}, m_green{green}, m_blue{blue}, m_alpha{alpha}
    {
    }

    void print()
    {
        std::cout << "r: " << static_cast<int>(m_red) << ", " <<
                     "g: " << static_cast<int>(m_green) << ", " <<
                     "b: " << static_cast<int>(m_blue) << ", " <<
                     "a: " << static_cast<int>(m_alpha) << "\n";
    }
};


//int main()
//{
//    RGBA teal(0, 127, 127);
//	teal.print();
//    return 0;
//}
