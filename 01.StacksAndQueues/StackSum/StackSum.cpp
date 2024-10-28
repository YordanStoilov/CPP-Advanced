#include <iostream>
#include <stack>
#include <string>
#include <sstream>


using namespace std;

int main()
{
	stack<int> numbers;

	string line;
	getline(cin, line);

	istringstream stream(line);
	int currNum;
	while (stream >> currNum)
		numbers.push(currNum);

	while (true)
	{
		getline(cin, line);
		if (line == "end")
			break;

		istringstream stream(line);
		string command;
		stream >> command;

		if (command == "add")
		{
			int n1, n2;
			stream >> n1 >> n2;

			numbers.push(n1); numbers.push(n2);
		}
		else if (command == "remove")
		{
			int n; 
			stream >> n;

			if (n <= numbers.size())
			{
				while (n--)
					numbers.pop();
			}
		}
	}

	int sum = 0;

	while (!numbers.empty())
	{
		sum += numbers.top();
		numbers.pop();
	}

	cout << sum << endl;
}