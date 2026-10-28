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

    char x;
    while(std::cin >> x)
    {
        if(x == '1')
        {
            std::cout << "HARD";
            return 0;
        }
    };
    std::cout << "EASY";
}