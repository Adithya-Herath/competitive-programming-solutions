#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    std::string first, second;
    std::cin >> first >> second;
    int output = 0;
    for (int i = 0; i< first.size(); i++)
    {
        char char_first = std::tolower(first[i]);
        char char_second = std::tolower(second[i]);
        if (char_first < char_second) 
        {
            output = -1; break;
        }
        if (char_second < char_first)
        {
            output = 1;
            break;
        }
    }   
    std::cout << output;
}

