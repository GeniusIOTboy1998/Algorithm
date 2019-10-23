#include <bits/stdc++.h>

using namespace std;

struct node
{
	int x,y;
}a[100005];

bool cmp(node a,node b)
{
	return a.y<a.y;
}

int main()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; ++i)
    {
     	cin>>a[i].x>>a[i].y;
    } 

    sort(a,a+n,cmp);

    long long maxn=a[0].y+a[n-1].y;

    for (int i = 0,j=n-1; i<=j ; )
    {
    	if(i==j){
    		maxn=max(maxn,a[i].y+a[j].y);
    		break;
    	}

    	while(a[i].x >= a[j].x && i<j) {
    	    a[i].x = a[j].x;
    	    maxn = max(maxn,a[i].y+a[j].y);
    	    j--;
    	}

    	while(a[i].x < a[j].x && i<j){
            a[j].x = a[i].x;
            maxn=max(maxn,a[i].y+a[j].y);
            i++;
    	}

    }


    cout<<maxn<<endl;
	return 0;
}