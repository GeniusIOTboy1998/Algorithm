/*********************
typedef struct node {
      int data;
      struct node  *link;
} NODE;
 

typedef NODE* PNODE;

**********************/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int maxn=10000+10;

int main()
{
    int n;
    int a[maxn]={0};

    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
            n=abs(n);
        if(a[n]==0)
        {
            cout<<n<<" ";
            a[n]++;
        }
    }
   
    return 0;
}