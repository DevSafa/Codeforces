#include <iostream>

int main()
{

    int cost_banana;
    int dollars;
    int nbr_bananas;

    std::cin >> cost_banana;
    std::cin >> dollars;
    std::cin >> nbr_bananas;

    int count = 0;
    for(int i = 0 ; i < nbr_bananas ; i++)
        count += cost_banana * (i + 1);
    if (dollars < count)
        std::cout << count - dollars << "\n";
    else
        std::cout << 0 << "\n";
}

/*

Soldier and Bananas

A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

Input
The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

Output
Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

Examples

inputCopy
3 17 4
outputCopy
13

*/