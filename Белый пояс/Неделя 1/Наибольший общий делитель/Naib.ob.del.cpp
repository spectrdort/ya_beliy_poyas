#include <iostream>

int main()
{
	int a, b, x = 0;
	std::cin >> a >> b;
	for (int i = 1; i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			x = i;
		}
	}
	std::cout << x;
	return 0;
}