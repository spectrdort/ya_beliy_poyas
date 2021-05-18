#include <iostream>
#include <vector>

std::vector<int> Reverse(std::vector<int> rev)
{
	int h = rev.size();
	int g = (h - 1) * 2; // сколько всего будет ячеек после добавления //
	for (int i = 1; i <= g; i++)
	{
		rev.insert(rev.begin(), rev[i]);
		i++;
	}
	rev.erase(rev.begin() + h, rev.end());
	return rev;
}