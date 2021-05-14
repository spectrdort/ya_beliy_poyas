#include <iostream>
#include <vector>

int main()
{
	int x;
	std::cin >> x;
	std::vector<int> s = { NULL };
	while (x >= 1)
	{
		s.push_back(x % 2);
		x /= 2;
	}
	for (int n = s.size; n >= 1; --n)
	{
		std::cout << s[n];
	}
	return 0;
}
