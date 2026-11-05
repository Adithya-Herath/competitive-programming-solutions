#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        std::cin >> a >> b;

        std::cout << b - ((a-1) % b) - 1 << std::endl;
    }
    
}
