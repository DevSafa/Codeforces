#include <iostream>

int main()
{
   int nbr_problems;

   std::cin >> nbr_problems;

   int sure[3 * nbr_problems];

   int count = 0;
   int submit = 0;

   if(!std::cin.fail())
   {
       for(int i = 0 ; i < nbr_problems * 3 ; i++)
           std::cin >> sure[i];
        for(int i = 1 ; i <= nbr_problems * 3 ; i++)
        {
            if(sure[i - 1] == 1 )
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