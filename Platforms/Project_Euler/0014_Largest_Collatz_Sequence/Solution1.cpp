#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> collatz_lengths(n, 0);

    for(int i = 1; i<= n; i++)
    {
        long long int t = i;
        int curr = 0;
        std::vector<int> collatz_sequence = {static_cast<int>(t)};
        if(collatz_lengths[i-1] != 0)
        {
            continue;
        }

        while(t != 1)
        {
            curr++;
            if((t<=n) && collatz_lengths[t-1])
            {
                for (int l: collatz_sequence)
                {
                    if (l != t)
                        collatz_lengths[l-1] += collatz_lengths[t-1];
                }
                curr += collatz_lengths[t-1];
                break;
            }


            for (int l: collatz_sequence)
            {
                collatz_lengths[l-1]++;
            }

            if( t%2 )
            {
                t = 3 * t + 1;
            }
            else 
            {
                t /= 2;
            }

            if(t <= n) 
            {
                collatz_sequence.push_back(t);
            }
        }

    }

    int max = 0;
    int max_starting_chain;

    for(int i = 0; i < n; i++)
    {
        if (collatz_lengths[i] > max)
        {
            max = collatz_lengths[i];
            max_starting_chain = i+1;
        }
    }

    std::cout << max_starting_chain << std::endl;

}