#include <iostream>


class Point3D
{
private:
    double m_x{}, m_y{}, m_z{};

public:
    void setXYZ(double x, double y, double z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }

    void print()
    {
        std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
    }
};


class Stack
{
private:
    const int m_capacity{10};
    int m_stackArray[10]{};
    int m_size{};

public:
    void reset()
    {
        m_size = 0;
        for (int i{}; i < m_capacity; ++i)
            m_stackArray[i] = 0;
    }

    bool push(int num)
    {
        if (m_size >= (m_capacity - 1))
            return false;
        else
        {
            ++m_size;
            m_stackArray[m_size - 1] = num;
            return true;
        }
    }

    int pop()
    {
        if (m_size <= 0)
            return -1;
        else
        {
            int value = m_stackArray[m_size - 1];
            m_stackArray[m_size - 1] = 0;
            --m_size;
            return (value);
        }
    }

    void print()
    {
        std::cout << "( ";
        for (int i{}; i < m_size; ++i)
        {
            std::cout << m_stackArray[i] << " ";
        }
        std::cout << ")\n";
    }

    void printEntire()
    {
        std::cout << "( ";
        for (int i{}; i < m_capacity; ++i)
        {
            std::cout << m_stackArray[i] << " ";
        }
        std::cout << ")\n";
    }
};


//int main()
//{
//    Point3D point;
//    point.setXYZ(1.2, 3.4, 5.6);
//    point.print();
//
//	Stack stack;
//	stack.reset();
//
//	stack.printEntire();
//
//	stack.push(5);
//	stack.push(3);
//	stack.push(8);
//	stack.printEntire();
//
//	stack.pop();
//	stack.printEntire();
//
//	stack.pop();
//	stack.pop();
//
//	stack.printEntire();
//
//    return 0;
//}
