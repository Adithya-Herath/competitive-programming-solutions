#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    std::array<bool, 26> total_chars{};
    std::string username;
    std::cin >> username;
    int total = 0;
    for (char c: username)
    {
        if (!total_chars[c-'a'])
        {
            total_chars[c-'a'] = true;
            total++;
        }
    }

    if(total%2)
    {
        std::cout << "IGNORE HIM!";
    }
    else
    {
        std::cout << "CHAT WITH HER!";
    }
}

