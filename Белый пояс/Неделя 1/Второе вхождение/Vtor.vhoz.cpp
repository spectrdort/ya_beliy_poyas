#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()

{
	std::string n;
	std::cin >> n;
	int x = 0;
	for (int i = 0; i < n.size(); ++i)
	{
		if (n[i] == 'f')
		{
			x++;
			if (x >= 2)
			{
				std::cout << i;
				return 0;
			}
		}
	}
	if (x == 0)
	{
		std::cout << "-2";
	}
	else
	{
		std::cout << "-1";
	}
	return 0;
}