#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    int lucky_count = 0;

    int sum_x = 0, sum_y = 0, sum_z = 0;
    int x, y, z;
    for(int i = 0; i<n; i++)
    {
        std::cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if((sum_x == 0) && (sum_y == 0) && (sum_z == 0))
        std::cout << "YES";
    else
        std::cout << "NO";
}