#include <bits/stdc++.h>

int main()
{
    long long int k, n, w;
    std::cin >> k >> n >> w;

    std::cout <<  std::max( w * (w+1) / 2 * k - n, 0ll) ;
}

