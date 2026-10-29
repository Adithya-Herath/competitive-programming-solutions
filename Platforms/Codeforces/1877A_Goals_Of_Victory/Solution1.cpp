#include <bits/stdc++.h>

void solve()
{
    int k;
    std::cin >> k;
    int sum = 0;
    int x;
    for(int i = 0; i < k-1; i++)
    {
        std::cin >> x;
        sum += x;
    }

    std::cout << -sum << '\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        solve();
    }
}