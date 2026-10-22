#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int w;
    std::cin >> w;
    if((w>2) && (( w %2 ) == 0))
    {
        std::cout << "YES" << std::endl;
    }
    else std::cout << "NO" << std::endl;
    return 0;
}