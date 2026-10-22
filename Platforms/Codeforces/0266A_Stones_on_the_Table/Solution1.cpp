#include <bits/stdc++.h>

int main()
{
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