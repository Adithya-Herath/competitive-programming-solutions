#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    long long int prev = -1;
    long long int curr;
    long long int sum = 0;

    for(int i = 0; i<n; i++)
    {
        std::cin >> curr;
        if(prev > curr)
        {
            sum += (prev-curr);
        }
        else
            prev = curr;
    }
    std::cout<< sum << std::endl;
    return 0;
}