#include <iostream>
#include <set>
#include <string>
#include <map>

void CHECK_1(std::map<std::string, std::set<std::string>> sin, std::string word1, std::string word2)
{
	auto it = sin.find(word1);
	int n = 0;
	for (auto i : it->second)
	{
		if (i == word2)
		{
			std::cout << "YES" << std::endl;
			n++;
			break;
		}
	}
	if (n == 0)
	{
		std::cout << "NO" << std::endl;
	}
}


int main()
{
	int N;
	std::string cmd;
	std::map<std::string, std::set<std::string>> sin;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			std::string word1, word2;
			std::set<std::string> n;
			std::cin >> word1 >> word2;
			auto it = sin.find(word1);
			if (it != sin.end())
			{
				it->second.insert(word2);
			}
			else
			{
				sin[word1] = n;
				it = sin.find(word1);
				it->second.insert(word2);
			}
			continue;
		}
		if (cmd == "COUNT")
		{
			std::string word;
			std::cin >> word;
			int n = 0;
			auto it = sin.find(word);
			if (it != sin.end())
			{
				n = it->second.size();
			}
			it = sin.begin();
			for (it; it != sin.end(); it++)
			{
				for (auto i : it->second)
				{
					if (i == word)
					{
						n++;
					}
				}
			}
			std::cout << n << std::endl;
		}
		if (cmd == "CHECK")
		{
			std::string word1, word2;
			std::cin >> word1 >> word2;
			auto it = sin.find(word1);
			auto it_2 = sin.find(word2);
			if (it != sin.end() && it_2 == sin.end())
			{
				CHECK_1(sin, word1, word2);
			}
			else if (it_2 != sin.end())
			{
				CHECK_1(sin, word2, word1);
			}
			else
			{
				std::cout << "NO";
			}
		}
	}
	return 0;
}