#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    int upper_bound = 32;
 
    while( (upper_bound/std::log(upper_bound)) < n)
    {
        upper_bound *= 2;
    }

    std::vector<bool> is_prime_list(upper_bound, true);
    is_prime_list[0]=false;
    int sqrt_bound = 1;

    for(;sqrt_bound * sqrt_bound < upper_bound; sqrt_bound++);
    for(int i = 2; i < sqrt_bound; i++)
    {
        if(is_prime_list[i-1])
        {
            for(int t = i+i; t <= upper_bound; t+=i)
            {
                is_prime_list[t-1] = false;
            }
        }
    }

    int count = 0;
    for(int i =1; i <= is_prime_list.size(); i++)
    {
        if(is_prime_list[i-1])
            count++;
        if(count == n)
        {
            std::cout << i << std::endl;
            break;
        }

    }
}