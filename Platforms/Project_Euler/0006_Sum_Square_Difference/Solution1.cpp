#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    long long int sum_of_squares = (n * (n+1) * (2 * n + 1))/6;
    long long int square_of_sums = (n * (n+1))/2;
    square_of_sums *= square_of_sums;
    std::cout << square_of_sums - sum_of_squares;
}