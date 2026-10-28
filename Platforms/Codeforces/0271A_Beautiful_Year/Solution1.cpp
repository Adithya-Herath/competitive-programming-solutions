#include <bits/stdc++.h>


bool has_distinct_digits(int i)
{
    std::string digits = std::to_string(i);
    return 
    !(  (digits[0]==digits[1]) ||
        (digits[0]==digits[2]) ||
        (digits[0]==digits[3]) ||
        (digits[1]==digits[2]) ||
        (digits[1]==digits[3]) ||
        (digits[2]==digits[3])
    );

    //This works because under the constraints
    //the numbers are always within 4 digits
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >>n;
    int i=n+1;
    for(; !has_distinct_digits(i); i++);
    std::cout << i << std::endl;

}