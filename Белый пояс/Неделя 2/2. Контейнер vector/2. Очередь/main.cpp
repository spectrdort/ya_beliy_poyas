#include <iostream>
#include <vector>
#include <string>

int main()
{
	int Q, k, r = 0;
	std::string ch;
	std::cin >> Q;
	std::vector<int> ochered, res;
	for (int i = 0; i < Q; i++)
	{
		std::cin >> ch;
		if (ch == "COME")
		{
			std::cin >> k;
			if (k > 0)
			{
				for (int i = 0; i < k; i++)
				{
					ochered.push_back(1);
				}
				continue;
			}
			if (k < 0)
			{
				for (int f = 0; f > k; f--)
				{
					ochered.pop_back();
				}
				continue;
			}

		}
		if (ch == "WORRY")
		{
			std::cin >> k;
			ochered[k] = 2;
			continue;
		}
		if (ch == "QUIET")
		{
			std::cin >> k;
			ochered[k] = 1;
			continue;
		}
		if (ch == "WORRY_COUNT")
		{
			for (int g = 0; g < ochered.size(); g++)
			{
				if (ochered[g] == 2)
					r++;
			}
			res.push_back(r);
			r = 0;
			continue;
		}
	}
	for (int h : res)
		std::cout << h << std::endl;
	return 0;
}