#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <limits.h>
#include <map>
#include <vector>

using namespace std;

bool isCharacterInArray(char[], int, char);

int main()
{
	stack<char> parentheses;

	int const arraySize = 3;
	char opening[arraySize] = { '(', '[', '{' };

	map<char, char> pairs = {
		{'}', '{'},
		{']', '['},
		{')', '('}
	};

	string line;
	cin >> line;

	for (char& character : line)
	{
		if (isCharacterInArray(opening, arraySize, character))
		{
			parentheses.push(character);
			continue;
		}

		if (!parentheses.size())
		{
			std::cout << "NO" << endl;
			return 0;
		}

		if (pairs[character] == parentheses.top())
			parentheses.pop();
		else
		{
			std::cout << "NO" << endl;
			return 0;
		}
	}
	std::cout << "YES" << endl;

}

bool isCharacterInArray(char array[], int arraySize, char character)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == character)
		{
			return true;
		}
	}
	return false;
}