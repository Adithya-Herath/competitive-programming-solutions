#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::string input_str;

    while(n>0)
    {
        std::cin >> input_str;
        int length = input_str.size();

        if (length <= 10) std::cout << input_str << '\n';
        else std::cout << input_str[0] << length-2 << input_str[length-1]<<'\n';
        n--;
    }
    return 0;
}