#include <bits/stdc++.h>

int main()
{
    std::string n;
    std::cin >> n;
    if( n.find('H') != std::string::npos || 
        n.find('Q') != std::string::npos ||
        n.find('9') != std::string::npos)
    {
        std::cout << "YES" << std::endl;
        return 0;
    }
    std::cout << "NO" << std::endl;
    return 0;
}
