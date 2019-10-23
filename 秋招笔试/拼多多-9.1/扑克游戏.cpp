#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void outRes(const string& str)
{
	int length=str.size();
	if(length<=1)
	{
		cout<<str[length];
		return;
	}
	for (int i = 0; i < length-1; ++i)
	{
		cout<<str[i]<<" ";
	}
	cout<<str[length-1];
}

void dfs(int n,int s,string res,string str1,string str2,string tmp)
{
     if(n==s)
     {
     	if(tmp==str2)
     		outRes(res);
     	return;     	
     }

     string left = string(1,str[1]);
     str1 = str1.substr(1,str1.size()-1);

     dfs(n+1,s,res+"d",str1,str2,tmp);
     dfs(n+1,s,res+"r",str1,str2,tmp+left);
     dfs(n+1,s,res+"l",str1,str2,left+tmp);
}


int main()
{
    int s; cin>>s;
    string strN,strM;

    while(s>0)
    {
    	s--;
        cin>>strN>>strM;
        
        const int s=strN.size();

        cout<<"{"<<endl;
        dfs(0,s,"",strN,strM,"");
        cout<<"}"<<endl;
    }

	return 0;
}