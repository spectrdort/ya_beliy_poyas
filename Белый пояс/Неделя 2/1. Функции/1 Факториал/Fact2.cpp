#include <iostream>

int Factorial(int n)
{
	if (n < 2)
	{
		return 1;
	}
	else
	{
		for (int i = (n - 1); i > 1; --i)
		{
			n *= i;
		}
		return n;
	}
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << Factorial(n);
	return 0;
}