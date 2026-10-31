#include <bits/stdc++.h>
#include <pthread.h>

int main()
{
	int n;
	std::cin >> n;
	
	long long int sum = 0;
	int x;
	std::multiset<int, std::greater<int>> coins{};
	for (int i = 0; i<n; i++)
	{
		std::cin >> x;
		sum += x;
		coins.insert(x);
	}

	int count = 0;
	int threshold = (sum/2);
	int cumulative_sum = 0;
	for (int i: coins)
	{
		count += 1;
		cumulative_sum += i;
		if (cumulative_sum > threshold)
			break;
	}

	std::cout << count;
}