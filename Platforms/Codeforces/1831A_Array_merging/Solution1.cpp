#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;
    std::vector<int> consecutive_count_first(2*n + 1, 0);
    std::vector<int> consecutive_count_second(2*n + 1, 0);

    int curr_streak = 1;
    int curr = 0;
    int prev = 0;
    for(int i = 0; i < n; i++)
    {
        std::cin >> curr;
        if(curr == prev)
        {
            curr_streak++;
        }
        if ( (curr != prev) || (i == (n - 1)) )
        {

            int& prev_count = consecutive_count_first[prev];
            prev_count = std::max(prev_count, curr_streak);
            if( (i == (n-1)) && (curr != prev))
            {
                int& curr_count = consecutive_count_first[curr];
                curr_count = std::max(1, curr_count);
                break;
            }
            prev = curr;
            curr_streak = 1;

        }
    }
    curr_streak = 1;
    curr = 0;
    prev = 0;

    for(int i = 0; i < n; i++)
    {
        std::cin >> curr;
        if(curr == prev)
        {
            curr_streak++;
        }
        if ( (curr != prev) || (i == (n - 1)) )
        {

            int& prev_count = consecutive_count_second[prev];
            prev_count = std::max(prev_count, curr_streak);
            if( (i == (n-1)) && (curr != prev))
            {
                int& curr_count = consecutive_count_second[curr];
                curr_count = std::max(1, curr_count);
                break;
            }
            prev = curr;
            curr_streak = 1;

        }
    }

    int max = 0;
    for(int i = 1; i <= 2*n; i++)
    {
        max = std::max((consecutive_count_first[i] + consecutive_count_second[i]), max);
    }
    std::cout << max << '\n';
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }
    
}