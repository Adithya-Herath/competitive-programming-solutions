#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::string input;
    std::cin >> input;

    char prev = ' ';
    int best_repetition = 0;
    int current_repitition = 0;
    for (char curr: input)
    {
        if (curr != prev)
        {
            current_repitition = 1;
            prev = curr;
        }
        else current_repitition++;

        best_repetition = std::max(current_repitition, best_repetition);
    }
    std::cout << best_repetition;
}