#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;

    int distinct_integers = 0;
    int a;
    int b;
    int x;
    int a_count = 0, b_count = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (distinct_integers == 0)
        {
            distinct_integers++;
            a = x;
            a_count++;
        }
        else if ( distinct_integers == 1)
        {
            if(a != x)
            {
                distinct_integers++;
                b = x;
                b_count++;
            }
            else
                a_count++;
        }
        else if (distinct_integers == 2)
        {
            if ((a != x) && ( b!=x))
            {
                std::cout << "No\n";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return;
            }
            else if (a==x)
                a_count++;
            else if (b==x)
                b_count++;
        }
    }
    if (distinct_integers == 1)
    {
        std::cout << "Yes\n";
        return;
    }
    else if (distinct_integers == 2)
    {
        if(std::abs(a_count - b_count) <= 1)
        {
            std::cout << "Yes\n";
            return;
        }
        else
            std::cout << "No\n";
    }
}

int main()
{
    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        solve();
    }    
}