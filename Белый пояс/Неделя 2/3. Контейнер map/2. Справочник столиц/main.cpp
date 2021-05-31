#include <iostream>
#include <vector>
#include <map>
#include <string>

void Ch_cap(std::string& co, std::string& ca, std::map <std::string, std::string>& sprav )
{
	std::map <std::string, std::string> ::iterator it;
	it = sprav.find(co);
	if (it == sprav.end())
	{
		sprav[co] = ca;
		std::cout << "Introduse new country " << co << " with capital " << ca;
	}
	else
	{
		if (it->second == ca)
		{
			std::cout << "Country " << co << " hasn't changed its capital";
		}
		else
		{
			std::cout << "Country " << co << " has changed its capital from " << it->second << " to " << ca;
			it->second = ca;
		}
	}
}

void ReN(std::string& co_o, std::string& co_n, std::map <std::string, std::string>& sprav)
{
	std::map <std::string, std::string> ::iterator it;
	it = sprav.find(co_o);
	std::string cap;
	if (it == sprav.end() || it->first == co_n)
	{
		std::cout << "Incorrect rename, skip";
	}
	else
	{
		cap = it->second;
		std::cout << "Country " << co_o << " with capital " << it->second << " has been renamed to " << co_n;
		sprav.erase(it);
		sprav[co_n] = cap;
	}
}

void Ab(std::string& co, std::map <std::string, std::string>& sprav)
{
	std::map <std::string, std::string> ::iterator it;
	it = sprav.find(co);
	if (it == sprav.end())
	{
		std::cout << "Country " << co << " doesn't exist";
	}
	else
	{
		std::cout << "Coutnry " << it->first << " has capital " << it->second;
	}
}

void Dump(std::map <std::string, std::string>& sprav)
{
	if (sprav.size() < 1)
	{
		std::cout << "There are no countries in the world";
	}
	else
	{
		std::map <std::string, std::string> ::iterator it;
		it = sprav.begin();
		for (int i = 0; i < sprav.size(); i++, it++)
		{
			std::cout << it->first << " " << it->second << std::endl;
		}
	}
}

int main()
{
	int N;
	std::cin >> N;
	std::string cmd, country, new_cap;
	std::map <std::string, std::string> sprav;

	for (int i = 0; i < N; i++)
	{
		std::cin >> cmd;
		if (cmd == "CHANGE_CAPITAL")
		{
			std::cin >> country >> new_cap;
			Ch_cap(country, new_cap, sprav);
			continue;
		}
		if (cmd == "RENAME")
		{
			std::cin >> country >> new_cap;
			ReN(country, new_cap, sprav);
			continue;
		}
		if (cmd == "ABOUT")
		{
			std::cin >> country;
			Ab(country, sprav);
			continue;
		}
		if (cmd == "DUMP")
		{
			Dump(sprav);
			continue;
		}
	}
}
