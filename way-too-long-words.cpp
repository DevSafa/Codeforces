#include <iostream>

int main()
{
    int nbr_words;

    std::cin >> nbr_words;

    if(!std::cin.fail())
    {
        std::string words[nbr_words] ;
        for(int i = 0 ; i < nbr_words  ; i++)
            std::cin >> words[i];
        for(int i = 0 ; i < nbr_words ; i++)
        {
            if(words[i].length() > 10)
            {
                std::cout << words[i][0];
                std::cout << words[i].length() - 2 ;
                std::cout << words[i][words[i].length()-1];
                std::cout << '\n';
            }
            else
                std::cout << words[i] << '\n';
        }
    }else
        std::cout << "failed" << std::endl; //not an int or press ctrl-D
}