/********************************
题目描述:
电话号码

*********************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
   

    while(n--)
    {   
       int length;
       string str;
       cin>>length;
       cin>>str;

       if(length<11)
       {
       	   cout<<"NO"<<endl;
       	   continue;
       }

 // 
       for (int i = 0; i < length-1; ++i)
       {
       	   if(str[i]=='8')
       	   {
               if(length-i>=10)
               {
               	 cout<<"YES"<<endl;
               	 break;
               }
       	   }

       	   if(i==length-10)
       	   	 cout<<"NO"<<endl;
       }

    }

        
	return 0;
}
