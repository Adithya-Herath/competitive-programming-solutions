#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long int n;
    int k;
    std::cin >> n >> k;

    for(int i = 0; i < k; i++)
    {
        if ( (n % 10) == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }

    std::cout << n;
}