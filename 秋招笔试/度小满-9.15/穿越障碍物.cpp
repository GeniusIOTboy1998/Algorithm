/**************************************
题目描述：
你现在在(0,0)，需要到(x,y)去，路上有n个障碍物。
给出每个障碍物的坐标，你只能平行于坐标轴走整数步，问你最少需要多少步才能走到目的地。

输入：
第一行三个数x,y,n

接下来n行，每行描述一个障碍物的坐标x_i,y_i 

-500≤x,y,x_i,y_i≤500

n≤10000

保证有解

输出：
输出一个数，代表最少的步数。

样例输入
2 0 3
1 0
1 1
1 -1
样例输出
6

***************************************/


#include <iostream>

using namespace std;

const int maxn=1000+10;
int a[maxn][maxn];

// dfs

int main()
{
    int x,y,n;
    cin>>x>>y>>n;

    int xi,yi;
    for (int i = 0; i < n; ++i)
    {
    	cin>>xi>>yi;
    	a[xi+500][yi+500]=1;
    }

    

	return 0;
}