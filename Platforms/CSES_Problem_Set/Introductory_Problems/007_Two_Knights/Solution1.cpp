#include <bits/stdc++.h>

// This is really interesting thing. I did this problem at start,
// by considering two cases, first the case where n>=5, and
// secondly attack smaller cases by hand

// In short, I managed to find 6 different kinds of squares
// The different types, depending on the number of squares the knight
// attacks.
//   name                     # squares    # attacking squares
//  -corners                -     4     - 2
//  -adjescent to corners   -     8     - 3 
//  -diagonal to corners    -     4     - 4
//  -final row/column       -  4(n-4)   - 4
//  -penultimate row/column -  4(n-4)   - 6
//  -interior squares       -  (n-4)^2  - 8

// If a knight is on a square, the number of other positions 
// the other knight can be in is (n^2 - # attacking squares -1)
// where the -1 happens because the other knight cannot stay in
// original knight's position either.

// So summing up the products # squares and the # other squares
// the other knight can be in yields the quartic polynomial
// n^4 - 9n^2 + 24n - 16

// However, there's an overcounting happening, which should be
// accounted for by dividing by 2! = 2 and therefore 
// Final polynomial is (n^4 - 9n^2 + 24n - 16)/2

// What baffles me to a disturbing level is the fact that this formula,
// for some god knows what the fuck reason, also works for the cases of
// n<5? HOW?????



int main()
{
    int n;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        long long int t = i;
        long long int sum = -16;
        sum += 24 * t;
        t *= t;
        sum -= 9 * t;
        t *= t;
        sum += t;
        sum /= 2;
        std::cout << sum << '\n';
    }
}

