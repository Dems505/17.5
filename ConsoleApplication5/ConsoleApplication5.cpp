// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

class Vector
{
private: 
    double x;
    double y;
    double z;
public:
    Vector() : x(2), y(4), z(6)
    {}
    void Show()
    {
        std::cout << "\n" << x << " " << y << " " << z;
    }
    double longV()
    {
        return sqrt(x * x + y * y + z * z);
    }

};

int main()
{
    Vector line;
    line.Show();
    std::cout << "\n" << line.longV();
}

