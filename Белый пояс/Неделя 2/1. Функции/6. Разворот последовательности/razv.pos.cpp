#include <iostream>
#include <vector>
#include <algorithm>

void Reverse(std::vector<int>& rev)
{
	for (int i = 0; i < rev.size() / 2; i++)
	{
		std::swap(rev[i], rev[rev.size() - 1 - i]);
	}
}