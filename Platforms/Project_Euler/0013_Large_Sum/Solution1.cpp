#include <bits/stdc++.h>

std::string BigIntegerStringAddition(std::string A, std::string B)
{
    if (A.empty()) return B;
    if (B.empty()) return A;
    int carry = 0;

    int i = A.size()-1;
    int j = B.size()-1;

    std::string ret = "";
    while((carry > 0) || (i >= 0) || (j >= 0))
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += (A[i] - '0');
            i--;
        }
        if (j >= 0)
        {
            sum += (B[j] - '0');
            j--;
        }
        carry = sum / 10;
        ret += ('0' + char((sum %= 10)));
    }
    std::reverse(ret.begin(), ret.end());
    return ret;
}

int main() 
{
    std::string total = "";
    std::string current;
    while (std::cin >> current)
    {
        total = BigIntegerStringAddition(total, current);
    }
    std::cout << total.substr(0, 10) << '\n';
    std::cout << total;
}
