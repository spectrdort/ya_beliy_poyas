#include <iostream>
#include <vector>

int main() {

	double n, a, b, x, y, cena = 0;
	std::cin >> n >> a >> b >> x >> y;

	if (n > b) 
	{
		if (y > 100 || y < 0) 
		{
			std::cout << "Go fuck urself with such tests";
			return 0;
		}
		else 
		{
		cena = n * (1 - y * 0.01);
		std::cout << cena;
		return 0; 
		}
	}	
	
	if (n > a) 
	{
		if (x > 100 || x < 0) 
		{
			std::cout << "Go fuck urself with such tests";
			return 0;
		}
		else 
		{
			cena = n * (1 - x * 0.01);
			std::cout << cena;
			return 0;
		}
	}
	else 
	{
		cena = n;
		std::cout << cena;
		return 0;
	}
}