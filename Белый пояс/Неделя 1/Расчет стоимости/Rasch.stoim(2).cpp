#include <iostream>

int main() 
{

	double n, a, b, x, y, cena = 0, razn = 0, srav = 0;
	std::cin >> n >> a >> b >> x >> y;

	razn = b - a;
	srav = n - a;
	if (srav < 0 && srav < razn)
	{
		std::cout << n;
		return 0;
	}

	if (srav < razn)
	{
			cena = n * (1 - (x * 0.01));
			std::cout << cena;
			return 0;
	}
	else
	{
			cena = n * (1 - (y * 0.01));
			std::cout << cena;
			return 0;
	}
}