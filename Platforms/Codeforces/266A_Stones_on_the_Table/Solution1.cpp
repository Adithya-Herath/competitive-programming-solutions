#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    std::cin >> n;
    std::string input_string;
    std::cin >> input_string;
    char prev = input_string[0];
    n = -1;
    for(char curr: input_string)
    {
        n += !bool(curr - prev);
        prev = curr;
    }
    std::cout << n;
}