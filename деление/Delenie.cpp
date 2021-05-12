#include <iostream>
#include <vector>
#include <map>

int main() {
	int a, b, c;
	std::cin >> a >> b;
	if (b == 0) {
		std::cout << "Impossible";
	}
	else 
	{
		c = a / b;
		std::cout << c;
		return 0;
	}
}