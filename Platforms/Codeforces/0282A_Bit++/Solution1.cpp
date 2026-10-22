#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;


    int output = 0;
    std::string input_str;
    while(n>0)
    {
        std::cin>>input_str;
        if((input_str == "++X") || (input_str == "X++"))
            output++;
        else output--;
        n--;
    }

    std::cout << output << std::endl;
    return 0;
}
