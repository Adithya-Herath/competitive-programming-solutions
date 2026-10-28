#include <bits/stdc++.h>

int to_lucky_number(int n)
{
    int ret = 0;
    int prod = 1;
    if(n==1) return 4;
    do 
    {
        int digit = 4;
        if(n & 1)
        {
            digit = 7;
        }
        ret += prod * digit;
        n >>= 1;
        prod *= 10;
    } while(n!=1);
    return ret;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int number;
    std::cin >> number;
    int lucky_factor;
    int i = 1;
    while((lucky_factor = to_lucky_number(i)) <= number)
    {
        i++;
        if ((number % lucky_factor) == 0)
        {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
    return 0;
}