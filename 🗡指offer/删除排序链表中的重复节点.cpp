//
//  
//

struct ListNode{
     int val;
     struct ListNode* next;
     ListNode(int x): 
        val(x),next(NULL);
};

class Solution{
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
         if (pHead==NULL || pHead->next==NULL)
         {
         	return pHead;
         }
         ListNode* next = pHead->next;
         if(pHead->val==next->val)
         {
         	while(next!=NULL && pHead->val == next->val)
         		next = next->next;
         	return deleteDuplication(next);
         }else{
            pHead->next = deleteDuplication(pHead->next);
            return pHead;
         }
	} 
};