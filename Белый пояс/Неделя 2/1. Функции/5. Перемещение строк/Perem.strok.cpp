#include <vector>
#include <string>

void MoveStrings(std::vector<std::string>& sourse, std::vector<std::string>& destination)
{
	for (int i = 0; i < sourse.size(); ++i)
		destination.insert(destination.begin(), sourse[i]);
	sourse.clear();
}