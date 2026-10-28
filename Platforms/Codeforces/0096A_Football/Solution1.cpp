#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    char curr_char;
    char prev_char = ' ';

    int count = 1;
    while(std::cin >> curr_char)
    {
        if (curr_char == prev_char)
        {
            count++;
            if (count == 7)
            {
                std::cout << "YES";
                return 0;
            }
        }
        else
            count = 1;

        prev_char = curr_char;
    }

    std::cout << "NO";

}