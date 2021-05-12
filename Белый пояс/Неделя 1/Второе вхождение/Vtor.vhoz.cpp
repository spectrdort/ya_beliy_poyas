#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

int main()

{
	std::string n = "sasas";
	// std::cin >> n; //
	for (int i = 0; i < n.size(); ++i)
	{
		if (n[i] == "a")
		{
			std::cout << i << std::endl;
		}
	}
	return 0;
}