#include <bits/stdc++.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    const std::string word = "hello";
    const int word_length = 5;

    std::string compare;
    std::cin >> compare;
    int compare_length = compare.size();

    int i = 0;
    int j = 0;
    while( (i < word_length) 
        && (j < compare_length))
    {
        if (compare[j] == word[i])
            i++;
        j++;
    }
    if(i==word_length)
        std::cout << "YES";
    else
        std::cout << "NO";
}