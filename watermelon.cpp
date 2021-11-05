#include <iostream>

int main()
{
    int kilos;

    std::cin >> kilos;
    if(!std::cin.fail())
    {
        if(kilos % 2 == 0 && kilos != 2)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }else
        std::cout << "failed\n";

}