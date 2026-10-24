#include <bits/stdc++.h>


// I wonder if I should've repeatedly taken the LCM individually
// but instead I opt'ed to find prime factorizations, then consider
// their maximal exponents and use them to figure out the LCM

// Midway I realized that a sieve approach would've worked where you
// sieve to figure out primes, and calculate their log
// by a bin exponentiation like trick

int binary_exponentiation(int base, unsigned int exponent)
{
    int val = 1;
    while(exponent)
    {
        if(exponent & 1)
            val *= base;
        base *= base;
        exponent >>= 1;
    }
    return val;
}

int main()
{
    int n;
    std::unordered_map<int, int> prime_factorization { {2, 0} };
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int t = i+1;
        int nu_2_t = 0;

        while(!(t&1))
        {
            t >>= 1;
            nu_2_t++;
        }

        if (prime_factorization[2] < nu_2_t)
        {
            prime_factorization[2] = nu_2_t;
        }

        for(int prime_factor = 3; prime_factor * prime_factor <= t; prime_factor += 2)
        {
            int nu_prime_factor_t = 0;
            while ((t % prime_factor) == 0)
            {
                t /= prime_factor;
                nu_prime_factor_t += 1;
            }

            auto prime_factor_iter = prime_factorization.find(prime_factor);
            if (prime_factor_iter == prime_factorization.end())
                prime_factorization[prime_factor] = nu_prime_factor_t;
            else if ( prime_factorization[prime_factor] < nu_prime_factor_t)
            {
                prime_factorization[prime_factor] = nu_prime_factor_t;
            }
        }

        if (t!=1)
        {
            auto prime_factor_iter = prime_factorization.find(t);
            if (prime_factor_iter == prime_factorization.end())
                prime_factorization[t] = 1;
            else if ( (prime_factor_iter->second) < 1)
            {
                prime_factor_iter->second = 1;
            }
        }
    }

    long long int result = 1;
    for(auto v: prime_factorization)
    {
        result *= binary_exponentiation(v.first, v.second);
    }
    std::cout << result;
}