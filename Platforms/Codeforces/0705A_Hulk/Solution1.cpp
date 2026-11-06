#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    bool hate = true;
    while(n--)
    {
        if (hate)
            std::cout << "I hate ";
        else
            std::cout << "I love ";
        hate = !hate;
        if (n)
            std::cout << "that ";
        else
            std::cout << "it\n";
    }    
}
