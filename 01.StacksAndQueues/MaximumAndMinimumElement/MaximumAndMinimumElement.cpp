#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;
int getSmallest(stack<int> st);
int getLargest(stack<int> st);

int main()
{
	stack<int> nums;

	int commands;
	cin >> commands;

	while (commands--)
	{
		int command;
		cin >> command;

		switch (command)
		{
		default: break;
		case 1:
			int num;
			cin >> num;
			nums.push(num);
			break;
		case 2:
			if (nums.size())
				nums.pop();
			break;
		case 3:
			if (nums.size())
				cout << getLargest(nums) << endl;
			break;
		case 4:
			if (nums.size())
				cout << getSmallest(nums) << endl;
			break;
		}
	}

	while (nums.size() > 1)
	{
		cout << nums.top() << ", ";
		nums.pop();
	}
	cout << nums.top() << endl;
}

int getSmallest(stack<int> st)
{
	int smallest = INT32_MAX;

	while (st.size())
	{
		int num = st.top();

		if (num < smallest)
		{
			smallest = num;
		}
		st.pop();
	}

	return smallest;
}

int getLargest(stack<int> st)
{
	int largest = INT32_MIN;

	while (st.size())
	{
		int num = st.top();

		if (num > largest)
		{
			largest = num;
		}
		st.pop();
	}

	return largest;
}