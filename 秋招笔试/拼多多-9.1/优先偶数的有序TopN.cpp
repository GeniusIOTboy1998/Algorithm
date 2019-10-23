#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isNum(int a)
{
	if(a%2==0) return true;
	else return false;
} // return true 则为偶数

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	// freopen("C:\\Users\\24398\\Desktop\\in-project.txt", "r", stdin);
    int n,num;
    vector<int> v1,v2;

    while(cin>>num)   // 输入数据
    {
    	if(isNum(num))
    	{
    		v1.push_back(num);
    	}else
    	{
    		v2.push_back(num);
    	}
        
        char c;
        cin>>c;
        if(c==';')
        {
        	break;
        }
    }
    cin>>n;

    sort(v1.begin(),v1.end(),cmp);  //排序
    sort(v2.begin(),v2.end(),cmp);

    for (int i = 0; i < n-1; ++i)     //打印输出
    {   
    	if(i<v1.size())
    	   cout<<v1[i]<<",";
    	else
    	   cout<<v2[(i-1-v1.size())]<<",";
    }

    if(n>v1.size())
    {
       cout<<v2[n-1-v1.size()]<<endl;
    }else
    {
       cout<<v1[n-1]<<endl;
    }

    return 0;
}