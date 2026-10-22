#include <bits/stdc++.h>
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    std::cin >> n;
 
    int a, b, c;
 
    int output = 0;
    while(n>0)
    {
        std::cin >> a >> b >> c;
        if ( (a+b+c)>1) output++;
        n--;
    }
 
    std::cout << output;
    return 0;
}