#include <bits/stdc++.h>


void solve()
{
    std::string bit_string;
    std::cin >> bit_string;

    int count_0 = 0, count_1 = 0;
    for(char x: bit_string)
    {
        if (x == '0')
            count_0++;
        if (x == '1')
            count_1++;
    }

    int required_0s = 0, required_1s = 0;
    int count = 0;
    for(char x: bit_string)
    {
        if (x=='0')
            if (required_1s < count_1)
                required_1s++;
            else 
                break;
        else if (x=='1')
            if (required_0s < count_0)
                required_0s++;
            else
                break;
        count++;
    }
    std::cout << bit_string.size()-count << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
        solve();    
}