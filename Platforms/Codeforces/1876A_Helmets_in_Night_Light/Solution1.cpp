#include <bits/stdc++.h>

void solve()
{
    int n, p;
    std::cin >> n >> p;

    std::vector<int> possible_announcements(n);
    std::vector<int> announcement_cost(n);

    int k;
    for(int i = 0; i < n; i++)
    {
        std::cin >> k;
        possible_announcements[i] = k;
    }
    for(int i = 0; i < n; i++)
    {
        std::cin >> k;
        announcement_cost[i] = k;
    }

    std::multiset<std::pair<int, int>> people;
    for(int i = 0; i <  n; i++)
    {
        if (announcement_cost[i] < p)
            people.insert(std::pair<int, int>(announcement_cost[i],
                          possible_announcements[i]));
    }

    int count = 1;
    long long int cost = p;
    for (auto v: people)
    {
        int remaining_announcements = std::min(v.second, n - count);
        count += remaining_announcements;
        cost += 1ll * v.first * remaining_announcements;
    }

    if (count == n)
        std::cout << cost << std::endl;
    else
    {
        cost += 1ll * (n-count) * p;
        std::cout << cost << std::endl;
    }

}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        solve();
    }
    
}
