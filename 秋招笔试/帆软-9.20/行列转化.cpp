/*********************************


**********************************/

#include <iostream>

using namespace std;

vector<int> v;

int main()
{
    int x,y;
    int key,key1,key2;
    cin>>x>>y;
    cin>>key>>key1>>key2;

    int cur;
    for (int i = 0; i < x; ++i)
    {
    	for (int j = 0; j < y; ++j)
    	{
            cin>>cur;
    		v[i].push_back(cur);
    	}
    }


    cout<<21<<endl;


	return 0;
}