// NWW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int NWD(int x, int y)
{
    int a = x;
    int b = y;

    while (a != b)
    {
        if (a < b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }

    return a;
}

int NWW(int x, int y)
{
    return (x * y) / NWD(x, y);
}

int main()
{
    int x = 0;
    int y = 0;
    std::cout << "Podaj wartosc x: " << std::endl;
    std::cin >> x;
    std::cout << "Podaj wartosc y: " << std::endl;
    std::cin >> y;
    std::cout << "NWW wynosi: " << NWW(x, y) << std::endl;
}

