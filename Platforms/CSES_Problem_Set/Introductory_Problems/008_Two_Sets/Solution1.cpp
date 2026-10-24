#include <bits/stdc++.h>

int main()
{

// The idea here is much simpler
// The nth triangle number, n(n+1)/2 is even iff either n or n+1 
// is divisible by 4.
// This is the say that n mod 4 = 1, 2 are the cases where it is 
// impossible to divide into two sets.

// On the other hand for any 4 integers x, x+1, x+2, x+3
// we have ((x) + (x+3)) = ((x+1) + (x+2)).

// 1 + 2 = 3 and 1 + 4 = 2 + 3 means inductively any number 
// who is 0 or 4 mod 4 works.

    int n;
    std::cin >> n;
    int mod_plus_1 = (n + 1)%4;
    if (mod_plus_1>1) 
    {
        std::cout << "NO";
        return 0;
    }
    else if (mod_plus_1 == 0) // mod = 3
    {
        std::cout << "YES" << '\n' << (n/2) << '\n' << 3 << ' ';
        for(int i =4; i < n; i+=4)
        {
            std::cout << i+1 << ' ' << i+2 << ' ';
        }

        std::cout <<  '\n' << (n/2) + 1 << '\n' << "1 2 ";
        for(int i =4; i < n; i+=4)
        {
            std::cout << i << ' ' << i+3 << ' ';
        }

    }
    else // mod = 4
    {
        std::cout << "YES\n"<< (n/2) << '\n';
        for(int i =0; i < n; i+=4)
        {
            std::cout << i+1 << ' ' << i+4 << ' ';
        }

        std::cout << '\n' << (n/2) << '\n';

        for(int i =0; i < n; i+=4)
        {
            std::cout << i+2 << ' ' << i+3 << ' ';
        }

    }
}

