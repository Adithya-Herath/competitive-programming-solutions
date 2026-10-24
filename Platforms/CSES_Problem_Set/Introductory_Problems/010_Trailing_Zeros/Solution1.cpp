#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    int sum = 0;
    while((n/=5)!=0)
        sum += n;
    std::cout << sum;
}