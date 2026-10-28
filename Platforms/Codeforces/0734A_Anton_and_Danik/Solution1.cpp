#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int threshold = (n / 2)+1;
    char x;

    int a = 0, d = 0;
    while(std::cin >> x)
    {
        if (x == 'A')
            a++;

        if (x == 'D')
            d++;

        if (a == threshold)
        {
            std::cout << "Anton";
            return 0;
        }
        else if (d == threshold)
        {
            std::cout << "Danik";
            return 0;
        }
    }
    std::cout << "Friendship";
}