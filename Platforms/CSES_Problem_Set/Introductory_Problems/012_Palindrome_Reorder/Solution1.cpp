#include <bits/stdc++.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::array<int, 26> char_repetitions{}; 
    char current_char;

    int odd_count = 0;
    int odd_char = ' ';

    //TIL that std::cin.get(current_char) is UB. Insanity.
    //Code literally worked after changing from std::cin.get(current_char)
    while(std::cin >> current_char)
    {
        int& current_char_count = char_repetitions[current_char-'A'];
        current_char_count++;
        int sign = (current_char_count % 2);
        odd_count += ((2 * sign) - 1);
    }
    if (odd_count > 1)
    {
        std::cout << "NO SOLUTION\n";
        return 0;
    }
    if (odd_count)
    {
        for(char i = 0; i < 26; i++)
        {
            if (char_repetitions[i] % 2) 
            {
                odd_char = char('A' + i);
                break;
            }
        }
    }
    for(char i = 0; i < 26; i++)
    {
        for (int j = 0; j < char_repetitions[i]/2; j++)
        {
            std::cout << char(i + 'A');
        }
    }
    if (odd_count) 
        std::cout << char(odd_char);

    for(char i = 25; i >= 0; i--)
    {
        for (int j = 0; j < char_repetitions[i]/2; j++)
        {
            std::cout << char(i + 'A');
        }
    }
}