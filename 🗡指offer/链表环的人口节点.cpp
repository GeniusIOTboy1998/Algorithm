/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)  // µ¥Á´±í
    {
        if(!pHead->next)
            return NULL;
        ListNode* previous = pHead;
        ListNode* front = pHead->next;
        
        while(front)
        {
            previous->next=NULL;
            previous = front;
            front = front->next;
        }
        
        return previous;
    }
};


class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        set<ListNode*> s;
        ListNode* node = pHead;
        while(node!=NULL)
        {
            if(s.insert(node).second)
                node = node->next;
            else
                return node;
        }
        return node;
    }
};
