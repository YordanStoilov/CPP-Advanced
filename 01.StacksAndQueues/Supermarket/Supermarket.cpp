#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	queue<string> customers;

	while (true)
	{
		string command;
		getline(cin, command);

		if (command == "End")
			break;
		if (command == "Paid")
		{
			while (customers.size())
			{
				cout << customers.front() << endl; 
				customers.pop();
			}
		}
		else
			customers.push(command);
	}
	cout << customers.size() << " people remaining." << endl;
}