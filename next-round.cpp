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
  
        if(i < pos - 1)
        {
            if( num == 0)
                 total--;
        }
        else if(i == pos - 1)
        {
             if( num == 0)
                total--;
            to_compare = num;
        }
        else if ( i > pos -1)
            if(num >= to_compare && num != 0)
                total++;
    }
 
    std::cout << total << std::endl;
 
 
}