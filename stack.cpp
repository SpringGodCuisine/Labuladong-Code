#include <stack>
#include <iostream>

using namespace std;

inline int stackTest()
{
	stack<int> stk1;

	stack<string>stk2;

	cout << stk1.empty() << endl;
	cout << stk2.empty() << endl;

	cout << "-------------------" << endl;

	cout << stk1.size() << endl;
	cout << stk2.size() << endl;

	cout << "-------------------" << endl;

	stk1.push(123);
	stk2.push("123");

	cout << stk1.top() << endl;
	cout << stk2.top() << endl;

	cout << "-------------------" << endl;

	stk1.pop();
	stk2.pop();

	if (!stk1.empty())
	{
		cout << stk1.top() << endl;
	}

	if (!stk2.empty())
	{
		cout << stk2.top() << endl;
	}

	return 0;
}