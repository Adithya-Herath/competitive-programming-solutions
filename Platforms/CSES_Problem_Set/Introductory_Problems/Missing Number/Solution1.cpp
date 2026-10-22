#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    std::cin >> n;
    int output = 0;
    for(int i = 1; i<=n; i++) output ^= i;

    int input;
    while(std::cin >> input)
    {
        output ^= input;
    }
    std::cout << output;
}