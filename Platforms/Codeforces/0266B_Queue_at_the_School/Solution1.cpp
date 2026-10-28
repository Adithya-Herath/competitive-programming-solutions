#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, t;
    std::cin >> n >> t;
    
    std::string queue;
    std::cin >> queue;

    for(int i = 0; i < t; i++)
    {
        std::string next_queue(n, ' ');
        for(int j = 0; j < n; j++)
        {
            if (queue[j] == 'B')
            {
                if (queue[j+1] == 'G')
                {
                    next_queue[j] = 'G';
                    next_queue[j+1] = 'B';
                    j++;
                }
                else
                    next_queue[j] = 'B';
            }
            else if (queue[j] == 'G')
                next_queue[j] = 'G';
        }
        queue = next_queue;
    }

    std::cout << queue;
}