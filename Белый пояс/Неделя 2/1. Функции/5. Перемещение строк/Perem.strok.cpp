#include <vector>
#include <string>

void MoveStrings(std::vector<std::string>& sourse, std::vector<std::string>& destination)
{
	destination.insert(destination.end(), sourse.begin(), sourse.end());
	sourse.clear();
}