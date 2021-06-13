#include <iostream>
#include <set>

int main()
{
	int N;
	std::set<std::string> words;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::string word;
		std::cin >> word;
		words.insert(word);
	}
	std::cout << words.size();
}