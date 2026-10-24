#include <bits/stdc++.h>

// I'm really interested in the ways in which this can be optimized
// Here, I have taken the naive approach, of going through all O(N^2)
// Possibilities and calculating out the highest value
// This is fine for N = 10^3
// But I believe it may be slightly better instead to go the opposite approach

// Where instead of going through all pairs of products and checking for palindromes
// you instead generate palindromes, and check if they have a pair of suitable digit sizes. 
// This feels better, because roughly speaking the number of palindroms of a number of size 
// n is roughly n/2 so the complexity reduces accordingly. Also this allows you to optimize
// such that going backwards from the largest palindrome to the smallest ensuring redundant
// calculations won't happen

// Another huge improvement can be made which is to use the fact that the product of 
// 2 N digit numbers sufficiently large is around 2N digits
// and even-digited palindromes are always divisible by 11!

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

bool isPalindrome(int n)
{
    std::string n_str = std::to_string(n);
    int len = n_str.size();
    for(int i = 0; i < len / 2; i ++)
    {
        if (n_str[i] != n_str[len - i - 1])
            return false;
    }
    return true;
}

int main()
{
    int number_of_digits;
    std::cin >> number_of_digits;

    int min = binary_exponentiation(10, number_of_digits-1);
    int max = min * 10;

    int max_val = 1;

    for (int i = min; i < max; i++)
    {
        for (int j = min; j < max; j++)
        {
            if(isPalindrome(i*j) && i*j > max_val)
                max_val = i*j;
        }
    }

    std::cout << max_val << std::endl;
}