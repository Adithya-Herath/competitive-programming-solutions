#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n;
    std::cin >> n;

    std::vector<int> current(n, 0);

    int gift_person = 0;
    for(int i = 1; i <= n; i++)
    {
        std::cin >> gift_person;
        current[gift_person - 1] = i;
    }
    for(int i :current)
    {
        std::cout << i << ' ';
    }

}