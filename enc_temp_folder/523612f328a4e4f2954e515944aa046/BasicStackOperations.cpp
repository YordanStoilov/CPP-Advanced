#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

int main()
{
	stack<int> numbers;

	int n, s, x;
	cin >> n >> s >> x;

	for (size_t i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		numbers.push(num);
	}

	for (size_t i = 0; i < s; ++i)
		numbers.pop();

	int smallest = INT32_MAX;
	bool found = false;

	for (size_t i = 0; i < numbers.size(); ++i)
	{
		int next = numbers.top();

		if (next == x)
		{
			cout << "true" << endl;
			found = true;
			break;
		}
		if (next < smallest)
			smallest = next;

		numbers.pop();
	}

	if (!found)
		cout << smallest << endl;
}