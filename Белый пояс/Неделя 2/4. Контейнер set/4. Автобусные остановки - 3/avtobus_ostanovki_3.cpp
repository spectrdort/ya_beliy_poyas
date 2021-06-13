#include <iostream>
#include <set>
#include <map>

int main()
{
	int Q;
	std::cin >> Q;
	std::map<int, std::set<std::string>> bus;
	for (int i = 0; i < Q; i++)
	{
		int n;
		std::set<std::string> stops;
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::string stop;
			std::cin >> stop;
			stops.insert(stop);
		}
		if (bus.empty())
		{
			bus[1] = stops;
			std::cout << "New bus 1" << std::endl;
		}
		else
		{
			auto it = bus.begin();
			for (it; it != bus.end(); it++)
			{
				int w = 0;
				if (stops != it->second)
				{
					w++;
				}
				else
				{
					std::cout << "Already exists for " << it->first << std::endl;
					break;
				}
				if (w == bus.size())
				{
					w++;
					bus[w] = stops;
					std::cout << "New bus " << w << std::endl;
					break;
				}
			}
		}
	}
}