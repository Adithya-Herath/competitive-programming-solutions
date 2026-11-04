#include <bits/stdc++.h>

int main()
{
    std::string a, b;

    std::cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        char compare = bool(a[i] - b[i]);
        std::cout << char('0' + compare);
    } 
}
