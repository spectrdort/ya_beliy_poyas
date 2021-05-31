#include <vector>
#include <iostream>
#include <string>

void PrintInt(std::vector<int> p)
{
	for (auto f : p)
		std::cout << f << std::endl;
}

void Print(std::vector<std::string> p)
{
	for (auto f : p)
		std::cout << f << std::endl;
}

int main()
{
	int Q, nomermes = 0, o = 0;
	std::string oper;
	std::cin >> Q; 
	std::vector<int> dela(31);
	std::vector<std::vector<std::string>> num_of_day(31.0,5, 6);
	std::vector<int> months { 31,28,31,30,31,30,31,31,30,31,30,31,31 };
	for (int i = 0; i < Q; i++)
	{
		std::cin >> oper;
		if (oper == "N")
		{
			if (nomermes < months.size() - 1)
			{
				std::string dop;
				if (months[nomermes] < months[nomermes + 1])
				{
					for (int i = months[nomermes + 1]; i < months[nomermes]; i++)
					{
						dop += num_of_day[nomermes];
						//num_of_day[i.size()] += (delo + " ");//
						dela[i] += 1;
					}
					nomermes++;
					num_of_day.resize(months[nomermes]);
					num_of_day[(num_of_day.size() - 1)] = dop;
					dop.clear();
				}
				else
				{
					nomermes++;
					num_of_day.resize(months[nomermes]);
				}
				continue;
			}
			else
			{
				nomermes = 0;
				num_of_day.resize(months[nomermes]);
			}
			continue;
		}
		if (oper == "A")
		{
			int f;
			std::string delo;
			std::cin >> f >> delo;
			f -= 1;
			if (num_of_day[f] == "0")
			{
				num_of_day[f].clear();
				num_of_day[f] += (delo + " ");
				dela[f] += 1;
				continue;
			}
			else
			{
				num_of_day[f] += (delo + " ");
				dela[f] += 1;
				continue;
			}
		}
		if (oper == "D")
		{
			int h;
			std::cin >> h;
			h -= 1;
			std::cout << dela[h] << " " << num_of_day[h];
			continue;
		}
	}
	return 0;
}