#include <bits/stdc++.h>

int main()
{
    std::string input;
    std::cin >> input;
    if( input[0] > 'Z' )
    {
        input[0] = (input[0] + ('A'-'a') );
    }
    std::cout << input;
}