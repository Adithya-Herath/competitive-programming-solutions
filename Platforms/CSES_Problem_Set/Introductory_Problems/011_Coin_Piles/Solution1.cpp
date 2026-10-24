#include <bits/stdc++.h>

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
    int a, b;
    while(n)
    {
        n--;
        std::cin >> a >> b;
        if( ! ((a+b) % 3))
        {
            if(std::max(a, b) > 2 * std::min(a, b))
                std::cout << "NO\n";
            else 
                std::cout << "YES\n";
        }
        else 
            std::cout << "NO\n";
    }
}