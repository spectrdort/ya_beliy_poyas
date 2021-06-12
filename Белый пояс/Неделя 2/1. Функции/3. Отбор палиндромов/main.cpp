#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> PalindromFilter(std::vector<std::string> words, int k)
{
	std::vector<std::string> res;
	for (auto word : words)
	{
		bool equal = true;
		for (int j = 0; j < word.size() / 2; j++)
		{
			if (word[j] != word[word.size() - 1 - j])
			{
				equal = false;
				break;
			}
		}
		if (equal)
			res.push_back(word);
	}
	return res;
}

int main()
{
	PalindromFilter({ "weew", "bro", "code", "madam"}, 4);
	return 0;
}