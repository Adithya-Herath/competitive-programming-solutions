#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int n;
    std::cin >> n;

    if (n == 1)
    {
        std::cout << '1';
        return 0;
    }
    if (n < 4)
    {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    for(int i = 5; i <= n; i +=2)
    {
        std::cout << i << ' ';
    }

    std::cout << "2 4 1 3 ";
    for(int i =6; i<= n; i+=2)
    {
        std::cout << i << ' ';
    }
    return 0;
}