#include <bits/stdc++.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin>>n;
    int sum = 0;
    float total = 0.0;
    int curr;
    for(int i = 0; i < n; i++)
    {
        std::cin >> curr;
        sum += curr;
        total += 100.0;
    }    
    std::cout << std::setprecision(8) << sum/total * 100; 
}