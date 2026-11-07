#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::array<bool, 26> characters;
    characters.fill(0);
    int unique_count = 0;

    while(n--)
    {
        char x;
        std::cin >> x;

        if (x < 'a') x += ('a' - 'A');
        if (!characters[x-'a'])
        {
            characters[x-'a'] = true;
            unique_count++;
            if (unique_count==26)
            {
                std::cout << "YES" << std::endl;
                return 0;
            }
        }
    }  
    std::cout << "NO" << std::endl;
    return 0;
}
