#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

inline int unordered_mapTest()
{
	unordered_map<int, int > mapping1;
	unordered_map<string, vector<int>> mapping2;

	cout << "-------------------" << endl;

	cout << mapping1.size() << endl;
	cout << mapping2.size() << endl;

	cout << "-------------------" << endl;

	cout << mapping1.empty() << endl;
	cout << mapping2.empty() << endl;

	cout << "-------------------" << endl;

	vector<int> nums{ 1,2,3,3,4,4,4,5 };

	unordered_map<int, int> counter;

	for (auto num : nums)
	{
		counter[num]++;
	}

	for (auto& it : counter)
	{
		int key = it.first;
		int value = it.second;

		cout << key << ": " << value << endl;
	}

	//����unordered_map��һ����Ҫע�⣬��[]�������еļ�keyʱ�����key�����ڣ�����Զ�����key����Ӧ��ֵΪֵ���͵�Ĭ��ֵ��
	//������������У�counter[num]++������ʵ���϶�Ӧ������䣺
	//for (auto num : nums)
	//{
	//	if (!counter.count(num))
	//	{
	//		counter[num] = 0;
	//	}
	//	counter[num]++;
	//}

	return 0;
}
