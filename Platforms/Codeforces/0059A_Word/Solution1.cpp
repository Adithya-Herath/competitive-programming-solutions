#include <bits/stdc++.h>

int main()
{
    std::string word;
    std::cin >> word;
    int length = static_cast<int>(word.size());

    int cap_count = 0;
    for (char v: word)
    {
        cap_count += bool(v < 'a');
    }
    if( (length-(2*cap_count)) < 0)
    {
        std::transform(word.begin(), word.end(), word.begin(),
            [](unsigned char c) {return std::toupper(c);});
        std::cout << word;
    }
    else
    {
        std::transform(word.begin(), word.end(), word.begin(), 
            [](unsigned char c) {return std::tolower(c);});
        std::cout << word;
    }
}

