// 递归式写法

class Solution {
public:
    ListNode* ReverseList(ListNode* pHead)
    {
         if(pHead==NULL || pHead->next==NULL)
         	return pHead;
         ListNode* next = pHead->next;
         pHead->next=NULL;
         ListNode* newNode = ReverseList(next);
         next->next=pHead;
         return newNode;
    }
};


// 迭代（头插法）

class Solution
{
public:
	ListNode* ReverseList(ListNode* pHead)
	{
		ListNode* newlist=NULL;
        while(pHead != NULL)
        {
        	ListNode* next=pHead->next;
        	pHead->next=newlist->next;
        	newlist->next=pHead;
        	pHead=next;
        }
        return newlist->next;
	}
};