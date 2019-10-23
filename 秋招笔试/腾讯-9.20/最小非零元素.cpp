/*************************


*************************/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	int cur;
    	cin>>cur;
    	v.push_back(cur);
    }

    sort(v.begin(),v.end());

    int sum=0;

    for (int i = 0; i < k; ++i)
    {
    	if(v[i]-sum != 0)
    	{
    		sum+=v[i];
    		cout<<(v[i]-sum)<<endl;
    	}
       // else
        
    }
    
	return 0;
}


#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int z[300005];
vector<int> v;

int main()
{
  //  freopen("in", "r", stdin);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>z[i];
    }
    sort(z+1,z+n+1);
    for(int i=1;i<=n;i++){
        if(z[i]!=z[i-1])
        v.push_back(z[i]-z[i-1]);
    }
    if(k<v.size()){
        for(int i=0;i<k;i++){
            cout<<v[i]<<endl;
        }
    }
    else {
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
        k-=v.size();
       // cout<<k<<endl;
        while(k--){
            cout<<0<<endl;
        }
    }
    return 0;
}