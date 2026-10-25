#include <bits/stdc++.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    std::cin >> n;

    std::vector<bool> is_prime_list(n, true);
    is_prime_list[0]=false;
    int sqrt_bound = 1;

    for(;sqrt_bound * sqrt_bound < n; sqrt_bound++);
    for(int i = 2; i < sqrt_bound; i++)
    {
        if(is_prime_list[i-1])
        {
            for(int t = i+i; t <= n; t+=i)
            {
                is_prime_list[t-1] = false;
            }
        }
    }

    long long int sum = 0;
    for(int i =1; i <= is_prime_list.size(); i++)
    {
        if (is_prime_list[i-1])
        {
            sum += i;
        }
    }

    std::cout << sum << std::endl;
}