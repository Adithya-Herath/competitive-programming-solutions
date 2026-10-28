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
    int count = 0;

    for(int i = 0; i< n; i++)
    {
        int p, q;
        std::cin >> p >> q;
        if( (q-p) > 1)
            count++;
    }
    std::cout << count;
}