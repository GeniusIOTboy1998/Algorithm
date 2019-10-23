/**********************************
此解法，不借助其它辅助堆结构，只使用stl里面的vector ，用来存储链表节点

对原来的k个链表进行遍历，然后依次将其放入vector中，之后用sort排序，然后再重构二叉树即可

用到了两次for循环，O（n），和标准库的sort函数，所以最后的复杂度是一个线性复杂度，O（n）

代码如下：

**********************************/


​




#include <iostream>
#include <algorithm>

using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 

ListNode* mergeKLists(vector<ListNode*>& lists) {
    vector<ListNode*> longList;
    for (ListNode* start:lists){
        ListNode* ptr = start;
        while (ptr != NULL){
            longList.push_back(ptr);
            ptr = ptr->next;
        }
    }
    sort(longList.begin(),longList.end(),[](auto x,auto y){return ((x->val) < (y->val));});

    if (longList.size() ==0){return NULL;}
    
    for (size_t i=0;i<longList.size()-1;i++){
        longList[i]->next = longList[i+1];
    }

    longList[longList.size()-1]->next = NULL;

    return longList[0];
}

int main()
{
    // vector<ListNode*> lists;
    // 输入链表 ， cin >> lists;

    mergeKLists(lists);

    return 0;
}