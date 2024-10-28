#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	queue<int> evens;

	string line;
	getline(cin, line);

	istringstream stream(line);
	int num = 0;

	while (stream >> num)
	{
		if (num % 2 == 0)
			evens.push(num);
	}

	while (evens.size() > 1)
	{
		cout << evens.front() << ", ";
		evens.pop();
	}
	cout << evens.front() << endl;

}