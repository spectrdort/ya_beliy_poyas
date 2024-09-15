#include <vector>
#include <iostream>
#include <string>

void ADD(std::vector<std::vector<std::string>>& mes)
{
	int i;
	std::string s;
	std::cin >> i >> s;
	mes[i - 1].push_back(s);
}

void DUMP(std::vector<std::vector<std::string>>& mes)
{
	int h = 0;
	std::cin >> h;
	int k = h - 1;
	std::cout << mes[k].size() << " ";
	for (auto s : mes[k])
		std::cout << s << " ";
}

void bigger(int& d)
{
	d++;
}

void smaller(std::vector<std::vector<std::string>>& mes, std::vector<int>& days, int& d, int& j)
{
	for (int l = days[j]; l < days[d]; l++)
	{
		int o = days[j] - 1;
		for (int m = 0; m < mes[l].size(); m++)
			mes[o].push_back(mes[l][m]);
	}
	d++;
}

void NEXT(std::vector<std::vector<std::string>>& mes, std::vector<int>& days, int& d)
{
	int j = d + 1;
	days[j] < days[d] ? smaller(mes, days, d, j) : bigger(d);
	if (d == 12)
		d = 0;
	mes.resize(days[d]);
}



int main()
{
	int Q, d = 0;
	std::vector<int> days_in_months{ 31,28,31,30,31,30,31,31,30,31,30,31,31 };
	std::vector<std::vector<std::string>> mes(days_in_months[d]);
	std::cin >> Q;
	std::string oper;
	for (int i = 0; i < Q; i++)
	{
		std::cin >> oper;
		if (oper == "ADD")
		{
			ADD(mes);
			continue;
		}
		if (oper == "DUMP")
		{
			DUMP(mes);
			continue;
		}
		if (oper == "NEXT")
		{
			NEXT(mes, days_in_months, d);
			continue;
		}

	}
	return 0;
}