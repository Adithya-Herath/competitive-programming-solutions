#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int n;
    std::cin >> n;
    while(n)
    {
        std::cout << n << ' ';
        if (n==1) break;
        else if (n%2)
        {
            n*=3; n++;
        }
        else n/=2;
    }
}