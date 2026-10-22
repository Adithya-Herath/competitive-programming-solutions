#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int position = 0;
    std::string curr;
    for(; position < 25; position++)
    {
        std::cin >> curr; 
        if (curr == "1") break;
    }

    int pos_x = (position % 5) + 1;
    int pos_y = (position / 5) + 1;
    std::cout << std::abs(pos_x - 3) + std::abs(pos_y - 3);
}
