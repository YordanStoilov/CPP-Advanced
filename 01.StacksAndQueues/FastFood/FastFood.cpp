#include <iostream>
#include <queue>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

int main()
{
	int foodQuantity;
	cin >> foodQuantity;
	cin.ignore();

	int largestOrder = INT32_MIN;
	queue<int> orders;

	string buffer;
	getline(cin, buffer);

	int value;
	istringstream stream(buffer);

	while (stream >> value)
	{
		if (value > largestOrder)
			largestOrder = value;

		orders.push(value);
	}

	cout << largestOrder << endl;

	while (orders.size() && 
		   foodQuantity >= orders.front())
	{
		foodQuantity -= orders.front();
		orders.pop();
	}

	if (orders.size() == 0)
		cout << "Orders complete" << endl;
	else
	{
		cout << "Orders left: ";

		while (orders.size() > 1)
		{
			cout << orders.front() << ' ';
			orders.pop();
		}
		cout << orders.front();
	}
}