#include <bits/stdc++.h>

// This is the most straightforward O(N) solution

int main()
{
    int fibonacci_upper_bound;
    std::cin >> fibonacci_upper_bound;

    int a = 1, b = 1, temp;
    long long int sum = 0;

    while(a <= fibonacci_upper_bound)
    {
        if (a % 2 == 0)
            sum += a;
        temp = a;
        a = a + b;
        b = temp;
    }

    std::cout << sum << '\n';
}