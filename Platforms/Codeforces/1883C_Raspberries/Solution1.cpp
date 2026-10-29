#include <bits/stdc++.h>
#include <cstdio>

void solve()
{
    int n, k;
    std::cin >> n >> k;
    int curr_best = INT_MAX;
    int x;
    if ( k != 4)
    {
        for(int i = 0; i < n; i++)
        {
            std::cin >> x;
            if ( (x % k) == 0)
            {
                std::cout << 0 << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return;
            }
            if ( curr_best > (k-(x%k)) )
                curr_best = k-(x%k);
        }
        std::cout << curr_best << std::endl;
    }
    else
    {
        int even_count = 0;
        curr_best = 2; 
        for(int i = 0; i < n; i++)
        {
            std::cin >> x;
            if ( (x % 4) == 0)
            {
                std::cout << 0 << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return;
            }
            if ( (x%4) == 3) 
            {
                curr_best = 1;
            }
            else if ( (x%2) ==0) 
            {
                even_count++;
                if (even_count == 1)
                {
                    curr_best = 1;
                }
                if (even_count == 2)
                {
                    curr_best = 0;
                }
            }
            if(curr_best == 0)
            {
                std::cout << 0 << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return;
            }

        }
        std::cout << curr_best << '\n';
        return;
    }
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

    for (int i = 0; i < n; i++)
        solve();
}