// #include <iostream>
// #include <algorithm>

// using namespace std;

// const int maxn=1000+10;
// int s[maxn],e[maxn];
// bool se[maxn];  // true=sleep,false=eat;



// /*
// bool cmp(int a,int b)
// {
// 	return a>b;
// }
// */
// int min_se(int a[],int n)
// {
//     int min_=a[0];
//     for (int i = 1; i < n-1; ++i)
//     {
//     	if(min_>a[i])
//     		min_=a[i];
//     }
//     return 0;
// }

// int main()
// { 
//     int n,k,ms,me;
//     cin>>n>>k>>ms>>me;

//     for (int i = 0; i < n-1; ++i)
//     {
//     	cin>>s[i];
//     }
//     for (int i = 0; i < n-1; ++i)
//     {
//         cin>>e[maxn];
//     }

//     int happy=0;
//     int sleep=0;
//     int eat=0;
//     for (int i = 0; i < n-1; ++i)
//     {
//     	if(s[i]>e[i])
//     	{
//             se[i]=true;
//             happy+=s[i];
//             sleep+=k;
//     	}else
//     	{
//             se[i]=false;
//             happy+=e[i];
//             eat+=k;
//     	}
//     }

//     while( sleep < ms)
//     {
         
//     }
//     while( eat  < me)
//     {

//     }


//     cout<<happy<<endl;
//     for (int i = 0; i < n-1; ++i)
//     {
//     	if(se){
//     		cout<<'S';
//     	}else{
//     		cout<<'E';
//     	}
//     }

// 	return 0;
// }  // 运行超时


#include <iostream>
#include <algorithm>

using namespace std;


int main()
{    
	int n,k,ms,me;
    cin>>n>>k>>ms>>me;

    for (int i = 0; i < n-1; ++i)
    {
    	cin>>s[i];
    }
    for (int i = 0; i < n-1; ++i)
    {
        cin>>e[maxn];
    }

    if(ms % k !=0)
    {
    	int sleep=ms/k+1;
    }else
    {
    	int sleep=ms/k;
    }

    if(me % k !=0)
    {
    	int eat=me/k+1;
    }else
    {
    	int eat=me/k;
    }

    

}