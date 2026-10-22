#include <bits/stdc++.h>

int main()
{
    std::string input;
    std::cin >> input;

    std::string token;

    std::vector<int> integers;
    std::stringstream ss(input);

    while(std::getline(ss, token, '+'))
    {
        integers.push_back(std::stoi(token));
    }

    std::sort(integers.begin(), integers.end());
    std::cout << integers[0];
    for(int n = 1; n <integers.size(); n++)
    {
        std::cout << '+' << integers[n];
    }
}