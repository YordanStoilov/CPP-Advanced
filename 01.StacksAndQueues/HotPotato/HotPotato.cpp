#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	queue<string> kids;

	string names;
	getline(cin, names);

	istringstream stream(names);

	string name;

	while (stream >> name)
	{
		kids.push(name);
	}

	int moves;
	cin >> moves;

	size_t count = 0;

	while (kids.size() > 1)
	{
		string currentKid = kids.front();
		if (++count % moves == 0)
			cout << "Removed " << currentKid << endl;
		else
			kids.push(currentKid);

		kids.pop();
	}	

	cout << "Last is " << kids.front() << endl;
}