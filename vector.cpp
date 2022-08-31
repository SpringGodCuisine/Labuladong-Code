#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

inline int vectorTest()
{
	vector<int> nums1;

	const int n = 5;
	vector<int> nums2(n);

	vector<int> nums3(n, 2);

	vector<vector<int>>dp1;

	const int m = 5;
	vector<vector<bool>> dp2(m, vector<bool>(n, true));


	cout << nums1.empty() << endl;
	cout << nums2.empty() << endl;

	cout << nums2.size() << endl;
	cout << nums3.size() << endl;

	cout << "-------------------" << endl;

	cout << nums2.back() << endl;
	cout << nums3.back() << endl;

	cout << "-------------------" << endl;

	nums2.push_back(123);
	nums3.push_back(456);

	cout << nums2.back() << endl;
	cout << nums3.back() << endl;

	cout << "-------------------" << endl;

	nums2.pop_back();
	nums3.pop_back();

	cout << nums2.back() << endl;
	cout << nums3.back() << endl;

	cout << "-------------------" << endl;

	swap(nums2[1], nums3[2]);

	for (auto num : nums2)
	{
		cout << num << endl;
	}

	cout << "-------------------" << endl;

	for (auto num : nums3)
	{
		cout << num << endl;
	}

	//ÒòÎª

	return 0;
}