#include <bits/stdc++.h>

int main()
{  
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    std::cin >> n;

    int x;
    for(int i = 0; i<n; i++)
    {
        int n;
        std::cin >> n;

        std::cin >> x;
        if (x == 1)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }    
}