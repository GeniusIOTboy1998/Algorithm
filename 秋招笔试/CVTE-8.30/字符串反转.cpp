#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s1;
    std::vector<string> svec;
    int num = 0;

    while(cin>>s1)
    {
    	svec.push_back(s1);
    	num++;
    }

    for(int i=num-1;i != 0; --i)
    {
    	cout<<svec[i]<<" ";
    }

    cout<<svec[0]<<endl;

	return 0;
}