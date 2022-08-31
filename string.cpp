#include<string>
#include<iostream>

using namespace std;

inline int stringTest()
{
	string s1;
	string s2 = "abc";

	cout << "-------------------" << endl;

	cout << s1.size() << endl;
	cout << s2.size() << endl;

	cout << "-------------------" << endl;

	cout << s1.empty() << endl;
	cout << s2.empty() << endl;

	cout << "-------------------" << endl;

	s1.push_back('0');
	s1.push_back('1');
	s2.push_back('0');

	cout << s1 << endl;
	cout << s2 << endl;

	cout << "-------------------" << endl;

	s1.pop_back();
	s2.pop_back();

	cout << s1 << endl;
	cout << s2 << endl;

	cout << "-------------------" << endl;

	cout << s2.substr(2, 3) << endl;

	return 0;
}