#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    std::cin >> n;
    std::multiset<int> sorted;

    int x;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x;
        sorted.insert(x);
    }

    for(int i: sorted)
    {
        std::cout << i << ' ';
    }
}
