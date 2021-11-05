#include <iostream>

int main()
{
    int nbr_words;
    std::cin >> nbr_words;

    if(!std::cin.fail())
    {
        std::string word;
        for(int i = 0 ; i < nbr_words  ; i++)
        {
            std::cin >> word;
            if(word.length() > 10)
            {
                std::cout << word[0];
                std::cout << word.length() - 2 ;
                std::cout << word[word.length()-1];
                std::cout << '\n';
            }
            else
                std::cout << word << '\n';
        }
    }else
        std::cout << "failed" << std::endl; //not an int or press ctrl-D
}