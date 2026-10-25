#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    char curr;
    std::queue<int> integer_train{};

    long long int max_product = 0;
    long long int tentative_product = 1;
    int index = 0;
    while(std::cin >> curr)
    {
        if (!std::isdigit(curr)) break;
        if (curr == '0')
        {
            integer_train = std::queue<int>();
            index = 0;
            tentative_product = 1;
            continue;
        }
        index++;
        if(index > n)
        {
            int front = integer_train.front();
            integer_train.pop();
            tentative_product /= front;
        }
        tentative_product *= (curr-'0');
        integer_train.push(curr-'0');
        if (index >= n)
        {
            max_product = std::max(max_product, tentative_product);
        }
    }
    std::cout << max_product;
}