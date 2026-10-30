#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(true);
    std::cin.tie(NULL);

    long long int n, k;
    std::cin >> n >> k;

    if (k <= (n+1)/2)
    {
        std::cout << 2 * k - 1 << '\n';
    }
    else
    {
        k -= (n+1)/2;
        std::cout << 2 * k << '\n';
    }
}