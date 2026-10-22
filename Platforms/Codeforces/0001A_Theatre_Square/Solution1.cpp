#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n, m, a;
    std::cin >> n >> m >> a;
    int x = (n/a) + bool(n%a);
    int y = (m/a) + bool(m%a);

    std::cout << 1ll * x * y << std::endl;
}

