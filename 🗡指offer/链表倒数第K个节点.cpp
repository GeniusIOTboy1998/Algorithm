//
//
//

// (1)

class Solution
{
public:
	  ListNode* FindKthToTail(ListNode* pListHead,unsigned int k)
	  {
          if(pListHead == NULL || k==0) 
          	return NULL;
          ListNode* p1=pListHead;
          while(p1!=NULL && k-- >0)
          	p1=p1->next;
          if(k>0)
          	return NULL;
          ListNode* p2;
          while(p1!=NULL)
          {
          	p1=p1->next;
          	p2=p2->next;
          }
          return p2;
	  }
};


// (2)

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
       if(pListHead==NULL || k==0) return NULL;
        ListNode* pListahead=pListHead;
        ListNode* pListbehind=pListHead;
            for(int i=0;i<k;++i)
            {
                if(pListahead!=NULL)
                {
                    pListahead=pListahead->next;
                }
                else return NULL;
            }      
        while(pListahead!=NULL) 
        {
            pListahead=pListahead->next;
            pListbehind=pListbehind->next;
        }
        return pListbehind;
    }
};