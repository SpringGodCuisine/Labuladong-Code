#include <unordered_set>
#include <string>
#include <iostream>

using namespace std;

inline int unordered_setTest()
{
	unordered_set<int> visited1;

	unordered_set<string> visited2;

	cout << "-------------------" << endl;

	cout << visited1.size() << endl;
	cout << visited2.size() << endl;

	cout << "-------------------" << endl;

	cout << visited1.empty() << endl;
	cout << visited2.empty() << endl;

	cout << "-------------------" << endl;

	cout << visited1.count(1) << endl;
	cout << visited2.count("hahaha") << endl;

	cout << "-------------------" << endl;

	visited1.insert(1);
	visited2.insert("hahaha");

	cout << visited1.count(1) << endl;
	cout << visited2.count("hahaha") << endl;

	cout << "-------------------" << endl;

	visited1.erase(1);
	visited2.erase("hahaha");

	cout << visited1.count(1) << endl;
	cout << visited2.count("hahaha") << endl;

	return 0;
}