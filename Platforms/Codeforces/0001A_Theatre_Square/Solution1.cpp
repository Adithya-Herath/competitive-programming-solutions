#include <bits/stdc++.h>

int main()
{
    int n, m, a;
    std::cin >> n >> m >> a;
    int x = (n/a) + bool(n%a);
    int y = (m/a) + bool(m%a);

    std::cout << 1ll * x * y << std::endl;
}

