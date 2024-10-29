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

	while (n--)
	{
		int num;
		cin >> num;
		numbers.push(num);
	}

	while (s--)
		numbers.pop();

	int smallest = INT32_MAX;

	if (!numbers.size())
	{
		cout << 0 << endl;
		return 0;
	}

	while (numbers.size())
	{
		int next = numbers.top();

		if (next == x)
		{
			cout << "true" << endl;
			return 0;
		}
		if (next < smallest)
			smallest = next;

		numbers.pop();
	}

	cout << smallest << endl;
}