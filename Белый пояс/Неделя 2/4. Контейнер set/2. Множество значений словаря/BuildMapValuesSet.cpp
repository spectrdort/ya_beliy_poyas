#include <set>
#include <map>
#include <string>
#include <iostream>

std::set<std::string> BuildMapValuesSet(const std::map<int, std::string>& m)
{
	auto it = m.begin();
	std::set<std::string> result;
	for (it; it != m.end(); it++)
		{
			result.insert(it->second);
		}
	return result;
}