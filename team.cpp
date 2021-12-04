#include <iostream>
 
int main()
{
   int nbr_problems;
 
   std::cin >> nbr_problems;
 
   int count = 0;
   int submit = 0;
   int number ;
   if(!std::cin.fail())
   {
        for(int i = 1 ; i <= nbr_problems * 3 ; i++)
        {
            std::cin >> number;
            if(number == 1 )
                count++; 
            if(i % 3 == 0)
            {
                if(count >= 2)
                    submit++;
                count = 0;
                continue;
            }
        }
   }
   else
        std::cout << "failed\n";
    std::cout << submit << "\n";
}