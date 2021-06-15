#include <iostream>
#include <algorithm>
#include <vector>

bool comp(int& i, int& j)
{
		// i > j убывание
	if (j < 0 && i > 0)
	{
			return j * (-1) > i;
	}
	else if (i < 0 && j > 0)
	{
			return i * (-1) < j;
	}
	else if (i < 0 && j < 0)
	{
			return i * (-1) < j * (-1);
	}
	else
		return i < j;
}

int main()
{
	int N;
	std::cin >> N;
	std::vector<int> nums;
	for (int i = 0; i < N; i++)
	{
		int num;
		std::cin >> num;
		nums.push_back(num);
	}
	std::sort(nums.begin(), nums.end(), comp);
	for (auto i : nums)
	{
		std::cout << i << " ";
	}
}