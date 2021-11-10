#include <iostream>

int main()
{
    int pos;
    int nbr;

    std::cin >> nbr;

    std::cin >> pos;

    int total = pos;

    int to_compare;
    for(int i = 0 ; i < nbr ; i++)
    {
        int num;
        std::cin >> num;
        if(i == 4)
            to_compare = num;
        if(i > 4)
        {
            if(num >= to_compare)
                total +=1;
        }
    }

    std::cout << total << std::endl;

   


   

}