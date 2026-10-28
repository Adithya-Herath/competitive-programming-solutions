#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s, t;
    std::cin >> s >> t;
    if(s.size() != t.size())
    {
        std::cout << "NO";
        return 0;
    }
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[t.size() - i - 1])
        {
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";
}