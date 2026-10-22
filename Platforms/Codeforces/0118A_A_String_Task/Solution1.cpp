#include <bits/stdc++.h>

int main()
{
    std::string word;
    std::cin >> word;
    for (char c: word)
    {
        if(std::isalpha(c))
        {
            char lowercase_c = std::tolower(static_cast<unsigned char>(c));
            //Behold the most horrendous piece of gobshite.
            if (lowercase_c != 'a' &&
                lowercase_c != 'e' &&
                lowercase_c != 'y' &&
                lowercase_c != 'i' &&
                lowercase_c != 'o' &&
                lowercase_c != 'u')
            {
                std::cout << '.' << lowercase_c;
            }
        }
    }
}

