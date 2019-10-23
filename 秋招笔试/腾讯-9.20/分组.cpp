/********************************
题目描述:
分组

*********************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number; cin>>number;
    int n，cur;
    vector<int> v;

    while(number--)
    {
       cin>>n;
       for (int i = 0; i < n; ++i)
       {
       	  cin>>cur;
       	  v.push_back(cur);
       }

       sort(v.begin(),v.end());


    }
    
	return 0;
}