#include <iostream>

using namespace std;

struct ListNode {

	int val;
	ListNode* next;
};


inline void traverse1(ListNode* head)
{
	for (ListNode* p = head; p != nullptr; p = p->next)
	{
		cout << p->val << endl;
	}
}


inline void traverse2(ListNode* head)
{
	if (head == nullptr)
		return;

	//前序遍历
	//cout << head->val << endl;

	traverse2(head->next);

	// 后序遍历
	cout << head->val << endl;
}

inline int ListNodeTest()
{
	ListNode* n1 = new ListNode();
	ListNode* n2 = new ListNode();
	ListNode* n3 = new ListNode();

	n1->val = 1;
	n2->val = 2;
	n3->val = 3;

	n1->next = n2;
	n2->next = n3;

	traverse1(n1);
	cout << "-------------------" << endl;
	traverse2(n1);

	return 0;
}


