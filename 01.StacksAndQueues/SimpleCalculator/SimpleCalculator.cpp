#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream stream(line);

	stack<char> operators;
	stack<int> numbers;

	int number;
	char op;

	while (stream >> number)
	{
		numbers.push(number);

		if (stream >> op)
			operators.push(op);
		else
			break;
	}

	int sum = 0;
	while (operators.size())
	{
		char c = operators.top();

		if (c == '-')
			sum -= numbers.top();
		else if (c == '+')
			sum += numbers.top();
		numbers.pop(); operators.pop();
	}
	if (numbers.size())
		sum += numbers.top();

	cout << sum << endl;
}