#include <bits/stdc++.h>

void print_binary(int x, int bits)
{
    for(int i = 0; i<bits; i++)
    {
        int mask = (x>>i)&1;
        std::cout <<  mask;
    }
    std::cout << '\n';
}
void print_string(int& x, int n, int bits)
{
    if (n == 1)
    {
        x ^= 1;
        print_binary(x, bits);
    }
    else
    {
        print_string(x, n-1, bits);
        x ^= (1 << (n-1) );
        print_binary(x, bits);
        print_string(x, n-1, bits);
    }

}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string str = "";
    int n;
    std::cin >> n;
    int i = 0;
    print_binary(i, n);
    print_string(i, n, n);
}