#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::string input;
    std::cin >> input;
    if( input[0] > 'Z' )
    {
        input[0] = (input[0] + ('A'-'a') );
    }
    std::cout << input;
}