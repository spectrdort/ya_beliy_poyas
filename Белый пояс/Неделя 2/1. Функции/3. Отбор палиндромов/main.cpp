#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> PalindromFilter(std::vector<std::string> words, int k)
{
	std::string w;
	std::vector<std::string> res;
		for (int i = 0; i < words.size(); ++i)
		{
			if (words[i].size() >= k)
			{
				w = words[i];
				std::reverse(w.begin(), w.end());
				{
					if (w == words[i])
					{
						res.push_back(words[i]);
					}
				}
			}
		}
	return res;
}

int main()
{
	PalindromFilter({ "weew", "bro", "code", "madam"}, 4);
	return 0;
}