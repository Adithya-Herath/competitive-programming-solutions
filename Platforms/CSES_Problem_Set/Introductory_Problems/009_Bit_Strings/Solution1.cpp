#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    constexpr const int prime = 1e9+7;
    //No FLT tricks because prime is too big. Sigh...

    int n;
    std::cin >> n;
    long long int two = 2;
    long long int output = 1;
    while(n)
    {
        if(n & 1)
        {
            output *= two;
            output %= prime;
        }
        two *= two;
        two %= prime;
        n >>= 1;
    }
    std::cout << output;
}