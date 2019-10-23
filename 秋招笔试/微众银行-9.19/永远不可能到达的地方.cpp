/**********************************
题目描述： 永远不可能到达的地方

n个景点，有m条路，不能重复经过某个点，

求那些景点是不可能到达的地方

***********************************/

#include <iostream>
#include <algorithm>

using namespace std;

const int maxn=100;
int a[maxn][maxn]={0};

int main()
{
    int n,m;  cin>>n>>m;

    int x,y;
    for (int i = 0; i < m; ++i)
    {
    	cin>>x>>y;
    	a[x][y]=1;
    }
    int s,t;
    cin>>s>>t;

    for (int i = 0; i < n; ++i)
      {
      	/* code */
      	//
      }  

	return 0;
}