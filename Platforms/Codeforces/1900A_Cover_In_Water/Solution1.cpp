#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;
    char x;

    int count = 0;
    int count_consecutive = 0;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x == '#')
            count_consecutive = 0;
        else if (x == '.')
        {
            count_consecutive++;
            count++;
            if (count_consecutive==3)
            {
                std::cout << "2\n";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return;
            }
        }
    }
    std::cout << count << '\n';
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