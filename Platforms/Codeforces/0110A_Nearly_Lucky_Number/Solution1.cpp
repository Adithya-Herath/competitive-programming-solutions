#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string n;
    std::cin >> n;
    int lucky_count = 0;

    for(char c: n)
    {
        if( (c=='4') || (c=='7') )
        {
            lucky_count++;
        }
    }

    int lucky_count_luck = 0;
    if (lucky_count == 0)
    {
        std::cout << "NO";
        return 0;
    }

    while(lucky_count)
    {
        int final_digit = lucky_count % 10;
        if((final_digit != 4) && (final_digit != 7))
        {
            std::cout << "NO";
            return 0;
        }
        lucky_count -= final_digit;
        lucky_count /= 10;
    }
    std::cout << "YES";
    return 0;
}