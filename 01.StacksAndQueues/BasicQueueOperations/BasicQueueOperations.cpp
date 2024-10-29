#include <iostream>
#include <queue>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

int main()
{
	queue<int> nums;

	int n, s, x;
	cin >> n >> s >> x;

	int num;
	while (n--)
	{
		cin >> num;
		nums.push(num);
	}

	while (s--)
		nums.pop();

	if (!nums.size())
	{
		cout << 0 << endl;
		return 0;
	}

	int numMin = INT32_MAX;
	while (nums.size())
	{
		int num = nums.front();

		if (num == x)
		{
			cout << "true" << endl;
			return 0;
		}
		if (num < numMin)
			numMin = num;

		nums.pop();
	}

	cout << numMin << endl;
}