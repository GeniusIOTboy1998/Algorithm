/********************************************

薯队长最近在玩一个迷宫探索类游戏，迷宫是一个N*N的矩阵形状，
其中会有一些障碍物禁止通过。这个迷宫还有一个特殊的设计，它的左右边界以及上下边界是连通的，
比如在(2,n)的位置继续往右走一格可以到(2,1)， 在(1,2)的位置继续往上走一格可以到(n,2)。
请问薯队长从起点位置S，最少走多少格才能到达迷宫的出口位置E。


********************************************/

//简单BFS
#include <cstdio>
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;
char maze[50][50];
bool vis[10][10];
int n;
int sx,sy;
int ex,ey;
int dx[]={1,0,-1,0};//四个方向
int dy[]={0,1,0,-1};
struct node
{
    int x,y,step;
};
void bfs()
{
    node p;
    p.x=sx;p.y=sy;p.step=0;
    queue<node>q;
    q.push(p);
    vis[sx][sy]=1;
    while(!q.empty())
    {    node tmp=q.front();
        q.pop();
        if(tmp.x==ex&&tmp.y==ey)
            {
            	cout<<tmp.step<<endl;
                return;
            }
        for(int i=0;i<4;i++)
        {
        	int xx=tmp.x+dx[i];
            int yy=tmp.y+dy[i];
        if(maze[xx][yy]!='#'&&xx>0&&yy>0&&xx<=n&&yy<=n&&!vis[xx][yy])
        {
            node tp;
            tp.x=xx;
            tp.y=yy;
            tp.step=tmp.step+1;
            vis[xx][yy]=1;
            q.push(tp);
        }

        }
    }
    cout <<"-1"<< endl;
}


int main()
{
    while(~scanf("%d",&n) && n!=0)
    {  
        memset(vis,0,sizeof(vis));//给标记数组清零
        for(int i=1;i<=n;i++)
          for(int j=1;j<=n;j++)
        {
        	cin>>maze[i][j];
            if(maze[i][j]=='S')
            {
                	sx=i;
                	sy=j;
            }
            if(maze[i][j]=='E')
            {
            	    ex=i;
            	    ey=j;
            }
        }   
       bfs();
    }
    return 0;
}

