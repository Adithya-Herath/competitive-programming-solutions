#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int limak_weight, bob_weight;
    std::cin >> limak_weight >> bob_weight;

    int count = 0;
    while(limak_weight <= bob_weight)
    {
        count++;
        limak_weight *= 3;
        bob_weight *= 2;
    }
    std::cout << count;
}