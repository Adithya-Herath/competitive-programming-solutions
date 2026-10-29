#include <bits/stdc++.h>

void solve()
{
    int n, min_consecutive_days, max_temp;
    std::cin >> n >> min_consecutive_days >> max_temp;

    int temp;
    long long int total = 0;

    int curr_day = 0;
    for(int i = 0; i < n; i++)
    {
        std::cin >> temp;
        if ( (temp > max_temp) || (i == n-1))
        {
            if (!(temp > max_temp))
                curr_day++;
            if(curr_day >= min_consecutive_days)
            {
                long long int j = curr_day - min_consecutive_days + 1;
                long long int possibilities = (j * (j+1))/2;
                total += possibilities;
            }
            curr_day = 0;
        }
        else
            curr_day++;
    }
    std::cout << total << '\n';
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }
    
}