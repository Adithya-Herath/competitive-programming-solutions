#include <bits/stdc++.h>

void solve()
{
    int n, x;
    std::cin >> n >> x;

    int max_fuel = 0;

    int prev = 0;
    int curr = 0;

    for(int i = 0; i < n; i++)
    {
        std::cin >> curr;
        max_fuel = std::max(max_fuel, curr-prev);
        prev = curr;
    }
    max_fuel = std::max(max_fuel, 2*(x-curr));
    std::cout << max_fuel << '\n';
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        solve();
    }
    
}