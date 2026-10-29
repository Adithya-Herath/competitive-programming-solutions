#include <bits/stdc++.h>

void solve()
{
    int arrays;
    std::cin >> arrays;

    std::multiset<std::pair<int, int>> min_pairs;

    int smallest_global = INT_MAX;
    for (int array_count = 0; array_count < arrays; array_count++)
    {
        int smallest = INT_MAX, second_smallest = INT_MAX;
        int array_len;
        std::cin >> array_len;
        int x;
        for(int i = 0; i < array_len; i++)
        {
            std::cin >> x;
            if (smallest > x)
            {
                second_smallest = smallest;
                smallest = x;
                smallest_global = std::min(smallest, smallest_global); 
            }
            else if (second_smallest > x)
            {
                second_smallest = x;
            }
        }

        min_pairs.insert(std::pair<int, int>(second_smallest, smallest));
    }

    long long int sum = smallest_global;
    int first = true;
    for(auto v: min_pairs)
    {
        if (first)
        {
            first = false;
        }
        else sum += v.first;
    }
    std::cout << sum << std::endl;

}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        solve();
    }
    
}
