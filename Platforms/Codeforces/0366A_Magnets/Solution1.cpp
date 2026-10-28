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

    int sum = 0;
    std::string prev = "";
    std::string curr = "";
    while(std::cin >> curr)
    {
        if(curr != prev)
            sum++;
        prev = curr;
    }

    std::cout << sum;
}