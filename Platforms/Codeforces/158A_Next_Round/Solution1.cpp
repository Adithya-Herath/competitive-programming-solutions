#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k;
    std::cin >> n >> k;
    int current_input;
    int kth_input;
    int output = 0;
    while(n > 0)
    {
        k--;     
        n--;
        std::cin >> current_input;
        if (current_input == 0 ) break;
        if ( (k<0) && (current_input < kth_input)) break;
        if (k == 0 ) kth_input = current_input;
        output++;
    }
    std::cout << output << std::endl;
}
