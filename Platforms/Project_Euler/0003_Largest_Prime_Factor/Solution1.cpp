#include <bits/stdc++.h>

// This is a horrible first attempt based on the only other algorithm I knew
// which was the sieve algorithm to generate all the primes below a certain point
// But at least, logically it feels like it should work, and gave the correct answer
// Clearly, this should be improved upon

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int n;
    std::cin >> n;
    long long int highest_prime_factor = 1;
    long long limit = (long long int)(std::ceil(std::sqrt(n)));

    // The memory complexity being O(sqrt(N)) is insane especially for larger N.
    std::vector<bool> bools(limit, false );

    for (long long int val = 2; val <= limit; val++)
    {
        if (!bools[val-1])
        {
            bool divided = false;
            while(!(n%val))
            {
                highest_prime_factor = val;
                n/=val;
                divided = true;
            }

            if (divided) limit = (long long int)(std::ceil(std::sqrt(n)))+1;

            for(long long int i = val; i <= limit; i += val)
            {
                bools[i-1] = true;
            }
        }
    }
    std::cout << std::max(highest_prime_factor, n);

    return 0;
}