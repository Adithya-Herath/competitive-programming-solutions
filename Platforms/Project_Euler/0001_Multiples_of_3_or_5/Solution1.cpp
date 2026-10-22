#include <bits/stdc++.h>

// This is the most straightforward O(N) solution.

int main()
{
    int n;
    std::cin >> n;

    // Since the sum is, roughly of order O(N^2), and N is roughly 1e3 in the problem
    // no need to worry about integer overflow

    int sum = 0;

    for(int i =1; i<n; i++)
    {
        if(!(i%3) ||  !(i%5))
            sum += i;
    }

    std::cout << sum;
}