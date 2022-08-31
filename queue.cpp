#include <queue>
#include <iostream>

using namespace std;

inline int queueTest()
{
	queue<int> q1;

	queue<string> q2;

	cout << q1.size() << endl;
	cout << q2.size() << endl;
	cout << "-------------------" << endl;

	cout << q1.empty() << endl;
	cout << q2.empty() << endl;
	cout << "-------------------" << endl;

	q1.push(123);
	q2.push("123");

	cout << q1.front() << endl;
	cout << q2.back() << endl;
	cout << "-------------------" << endl;

	q1.pop();
	q2.pop();
	

	cout << q1.size() << endl;
	cout << q2.size() << endl;
	if (q1.size() != 0)
	{
		cout << q1.back() << endl;
	}
	if (q2.size() != 0)
	{
		cout << q2.back() << endl;
	}

	cout << "-------------------" << endl;

	return 0;
}