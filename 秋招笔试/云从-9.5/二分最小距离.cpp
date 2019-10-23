// #include <iostream>
// #include <algorithm>

// using namespace std;

// const int maxn=10000+10;
// int a[maxn],bs[maxn];

// int main()
// {
//     int n,m;
//     cin>>n>>m;

//     for (int i = 0; i < n-1; ++i)
//     {
//     	cin>>a[i];
//     }

//     sort(a,a+n);

//     for (int i = 1; i < n-1; ++i)
//     {
//     	bs[i-1]=a[i]-a[i-1];
//     }
//     sort(bs,bs+n-1);
   
//     cout<<bs[n-m-1]<<endl;

// 	return 0;
// }

// 10%

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int maxn=100000+10;

int n,m;
int a[maxn];

bool func(int x)
{
	int num=1;
	int cur=x[1];

	for (int i = 2; i <= n; ++i)
	{
		if(a[i]-cur>=x)
		{
			cur=x[i];
			if(++num >= m)  return true;
		}
	}
	return false;
}

int main()
{
	cin>>n,m;
	for (int i = 0; i < n-1; ++i)
	{
		cin>>a[i];
		sort(a,a+n);

		int l=1,r=1e9;
		while(r>l)
		{
			int mid=l+(r-l+1)/2;

			if(func(mid)) l=mid;
			else r=mid-1;
		}

		cout<<l<<endl;
	}
	return 0;
}