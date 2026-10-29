#include <bits/stdc++.h>

void solve()
{
    int n, k;
    std::cin >> n >> k;
    std::set<std::pair<int, int>> health_monster_pairs;

    int health;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> health;
        health %= k;
        if (health == 0) health = k;
        health = k - health;
        health_monster_pairs.insert(std::pair<int, int>(health, i));
    }

    for (auto v: health_monster_pairs)
    {
        std::cout << v.second << ' ';
    }
    std::cout << '\n';
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }   
}