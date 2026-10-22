#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int k, n, w;
    std::cin >> k >> n >> w;

    std::cout <<  std::max( w * (w+1) / 2 * k - n, 0ll) ;
}

