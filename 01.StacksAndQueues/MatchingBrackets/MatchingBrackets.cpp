#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	stack<int> openingIdx;

	for (size_t i = 0; i < line.size(); ++i)
	{
		if (line[i] == '(')
			openingIdx.push(i);

		else if (line[i] == ')')
		{
			cout << line.substr(openingIdx.top(), i - openingIdx.top() + 1) << endl;
			openingIdx.pop();
		}
	}
}