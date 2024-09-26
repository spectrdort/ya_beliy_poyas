#include <iostream>
#include <vector>

void PrintVec(std::vector<int> p)
{
	for (int& s : p)
	{
		std::cout << s << " ";
	}
}
void temp(std::vector<int> t, int& n)
{
	std::vector<int> tem;
	int s = 0, nom = 0, k = 0;
	for (int i : t)
		s += i;
	s /= n;
	for (int i : t)
	{
		if (i > s)
		{
			tem.push_back(nom);
			nom++;
			k++;
		}
		else
			nom++;
	}
	std::cout  << k << std::endl;
	PrintVec (tem);
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> t(n);
	for (auto& s : t)
	{
		std::cin >> s;
	}
	temp(t, n);
	return 0;
}