#include <bits/stdc++.h>

int main() 
{
    int x;
    std::unordered_set<int> unique_colours{};
    for(int i = 0; i < 4; i++)
    {
        std::cin >> x;
        unique_colours.insert(x);
    }
    std::cout << 4 - unique_colours.size();
}