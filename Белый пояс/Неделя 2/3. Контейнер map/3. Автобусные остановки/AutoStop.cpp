#include <string>
#include <iostream>
#include <map>
#include <vector>

int main()
{
	int Q;
	std::cin >> Q;
	std::map <std::string, std::vector<std::string>> mar;
	std::map <std::string, std::vector<std::string>> :: iterator it;
	std::map <std::string, std::vector<std::string>> :: iterator it_2;
	std::vector<std::string> buses;
	for (int i = 0; i < Q; i++)
	{
		std::string cmd;
		std::cin >> cmd;
		if (cmd == "NEW_BUS")
		{
			int stop_count;
			std::string bus, stop;
			std::vector<std::string> stops;
			std::cin >> bus >> stop_count;
			mar[bus] = stops;
			it = mar.find(bus);
			for (int j = 0; j < stop_count; j++)
			{
				std::cin >> stop;
				it->second.push_back(stop);
			}
			continue;
		}
		if (cmd == "BUSES_FOR_STOP")
		{
			std::string stop;
			std::cin >> stop;
			if (mar.empty())
			{
				std::cout << "No stop" << std::endl;
				continue;
			}
			else
			{
				it = mar.begin();
				for (auto x : it->first)
				{
					for (auto s : it->second)
					{
						if (s == stop)
							buses.push_back(it->first);
					}
					it++;
				}
			}
			if (buses.size() == 0)
			{
				std::cout << "No stop" << std::endl;
			}
			else
			{
				for (auto z : buses)
				{
					std::cout << z << " ";
				}
				buses.clear();
				std::cout << std::endl;
				continue;
			}
		}
		if (cmd == "STOPS_FOR_BUS")
		{
			std::string bus;
			std::cin >> bus;
			it = mar.find(bus);
			if (mar.empty())
			{
				std::cout << "No bus" << std::endl;
			}
			else
			{
				for (auto z : it->second)
				{
					std::cout << "Stop " << z << ":";
					it_2 = mar.begin();
						for (auto c = 0; c < it->second.size() && it_2 != mar.end(); c++, it_2++)
						{
							for (int v = 0; v < it_2->second.size(); v++)
							{
								if (z == it_2->second[v] && it->first != it_2->first)
									buses.push_back(it_2->first);
								else
									continue;
							}
						}
						if (buses.empty())
						{
							std::cout << " no enterchange";
						}
						else
						{
							for (auto z : buses)
							{
								std::cout << " " << z;
							}
						}
						std::cout << std::endl;
						buses.clear();
				}
			}
		}
		if (cmd == "ALL_BUSES")
		{
			if (mar.empty())
				std::cout << "No buses" << std::endl;
			else
			{
				it = mar.begin();
				for (auto z = 0; z < mar.size(); z++, ++it)
				{
					std::cout << "Bus " << it->first << ":";
					for (auto x : it->second)
					{
						std::cout << " " << x;
					}
					std::cout << std::endl;
				}
			}
		}
	}
	return 0;
}