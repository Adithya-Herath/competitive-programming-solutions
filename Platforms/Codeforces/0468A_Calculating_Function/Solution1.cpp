#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long int n;
    std::cin >> n;

    long long int solution = (n/2);
    if (n%2)
        solution -= n;

    std::cout << solution;
}