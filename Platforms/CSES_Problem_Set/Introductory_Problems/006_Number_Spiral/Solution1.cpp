#include <bits/stdc++.h>

int main()
{
    long long int n;
    std::cin >> n;

    long long int x, y;
    for(long long int i = 0; i<n; i++)
    {
        std::cin >> x >> y;
        long long int s = std::max(x, y);
        std::cout << s * s - s + 1 + ((-2 * (s%2)) + 1) * (x - y) << '\n';
    }
}