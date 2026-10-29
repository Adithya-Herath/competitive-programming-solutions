#include <bits/stdc++.h>

void solve()
{
    int n, m;
    int i = 0;
    int count = 0;
    std::cin >> n >> m;

    std::string small, big;

    std::cin >> small >> big;

    if (small.find(big) != std::string::npos)
    {
        std::cout << 0 << '\n';
        return;
    }
    std::string current_string = small;
    while(i <= 2 * m)
    {
        if (i ==0)
            i = 1;
        else i *=2;
        current_string += current_string;
        count++;
        if (current_string.find(big) != std::string::npos)
        {
            std::cout << count << '\n';
            return;
        }
    }
    std::cout << "-1\n";
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