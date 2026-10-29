#include <bits/stdc++.h>

int main()
{  
    int n;
    std::cin >> n;

    int x;
    for(int i = 0; i<n; i++)
    {
        std::cin >> x;
        if (x%3)
            std::cout << "First\n";
        else
            std::cout << "Second\n";
    }
    
}