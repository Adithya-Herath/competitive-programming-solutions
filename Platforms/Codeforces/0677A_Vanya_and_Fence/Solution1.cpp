#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, h;
    std::cin >> n >> h;

    int sum = n;

    int current_height;
    for(int i = 0; i < n; i++)
    {
        std::cin >> current_height;
        if (current_height > h)
            sum++;
    }
    std::cout << sum;
}