#include <map>
#include <vector>
#include <iostream>
#include <string>

int main()
{
	int Q, n = 1;
	std::map <std::vector<std::string>, int> bus;
	std::map < std::vector<std::string>, int> :: iterator it = bus.begin();
	std::vector<std::string> stops;
	std::string stop;
	std::cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		int q;
		std::cin >> q;
		for (int j = 0; j < q; j++)
		{
			std::cin >> stop;
			stops.push_back(stop);
		}
		it = bus.find(stops);
		if (it == bus.end() || bus.empty())
		{
			bus[stops] = n;
			std::cout << "New bus " << n << std::endl;
			n++;
			stops.clear();
		}
		else
		{
			std::cout << "Already exists for " << it->second << std::endl;
			stops.clear();
		}
	}
	return 0;
}

