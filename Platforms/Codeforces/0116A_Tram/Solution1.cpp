#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int max = 0;
    int enter = 0, exit = 0;
    int current = 0;
    for(int i = 0; i < n; i++)
    {
        std::cin >> exit >> enter;

        current -= exit;
        current += enter;
        max = std::max(current, max);
    }

    std::cout << max;
    
}