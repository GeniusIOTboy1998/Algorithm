/*********************************************
题目描述：
假设以一个n*m的矩阵作为棋盘，每个棋位对应一个二维坐标 (x, y)。
你有一颗棋子位于左上起点(0, 0)，现在需要将其移动到右下底角 (n-1, m-1)，
棋子可以向相邻的上下左右位置移动，每个坐标最多只能经过一次。
棋盘中散布着若干障碍，障碍物不能跨越，只能绕行，问是否存在到达右下底角的路线？
若存在路线，输出所需的最少移动次数；若不存在，输出0。 
Input 第一行三个正整数n，m和k，代表棋盘大小与障碍物个数  1< n、m < 100,  k < n*m 第二行至第k+1行，每行为两个整数x和y，代表k个障碍物的坐标。


输入：
输入三个正整数n，m和k，代表棋盘大小与障碍物个数  1< n、m < 100,  k < n*m

第二行至第k+1行，每行为两个整数x和y，代表k个障碍物的坐标。


输出：
输出从起点到终点的最短路径的长度，如果不存在，即输出0


*********************************************/

#include <iostream>
#include <queue>


using namespace std;

const int maxn=100+5;
int A[maxn][maxn]={0};

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int n,m,k;   // begin end ...

struct node
{
	int x,y,step;
};

void bfs()
{
    node p;
    p.x=0;
    p.y=0;
    p.step=0;

    queue<node>q;
    q.push(p);

    while(!q.empty())
    {
       node tmp=q.front();
       q.pop();

       if(tmp.x==n-1 && tmp.y==m-1)
       {
       	cout<<tmp.step<<endl;
       	return;
       }

       for(int i=0;i<4;i++)
        {
            int xx=tmp.x+dx[i];
            int yy=tmp.y+dy[i];

            if(A[xx][yy]==0 && xx>0 && yy>0 && xx<=n-1 && yy<=m-1)
            {
            	node tp;
            	tp.x=xx;
            	tp.y=yy;
            	tp.step=tmp.step+1;
            	q.push(tp);
            }
        }
    }

    cout<<0<<endl;
}

int main()
{

    cin>>n>>m>>k;

    for (int i = 0; i < k; ++i)
    {
    	int x,y;
    	cin>>x>>y;

        A[x-1][y-1]=1;
    }

    bfs();

	return 0;
}
/*
初始化队列q;
初始化标记矩阵mask;
起点start入队;
while(q非空){
		q队首元素tmp出队;
		if(tmp==目标状态){
				找到解, 退出循环;
		};
		for(){
				所有与tmp相邻且未被访问的点入队;
		}
		标记tmp为已访问;
}
*/