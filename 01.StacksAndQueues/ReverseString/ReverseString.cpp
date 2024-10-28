#include <iostream>
#include <stack>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::stack;

int main()
{
    string input;
    getline(cin, input);

    stack<char> letters = stack<char>();

    for (char letter : input)
    {
        letters.push(letter);
    }

    cout << '\n';

    while (!letters.empty())
    {
        cout << letters.top();
        letters.pop();
    }
    cout << '\n';
}
