#include <vector>

std::vector<int> vector(std::vector<int> sam)
{
	std::vector<int> rev;
	for (int i = sam.size() - 1; i > -1; i--)
		rev.push_back(sam[i]);
	return rev;
}