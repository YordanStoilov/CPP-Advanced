#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

int main()
{
	stack<int> clothes;
	int racks = 1;

	string buffer;
	getline(cin, buffer);

	istringstream stream(buffer);

	int current;
	while (stream >> current)
		clothes.push(current);

	int rackSize;
	cin >> rackSize;
	int currentRack = rackSize;

	while (clothes.size())
	{
		int clothing = clothes.top();

		if (clothing > currentRack)
		{
			racks++;
			currentRack = rackSize;
		}
		currentRack -= clothing;

		clothes.pop();
	}

	cout << racks << endl;
}