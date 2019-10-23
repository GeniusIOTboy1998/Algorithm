#include <iostream>
#include <algorithm>

using namespace std;

int a[4][4] = {{2,6,8,4}, {4,2,6,8}, {6,8,4,2}, {8,4,2,6}};
int b[10] = {6,6,2,6,4,4,4,8,4,6};

int main()
{
	int n;  cin>>n;
    int sum=0,t=1;


    if(n==0 || n==1)
    	cout<<1<<endl;
    else 
    {
    	while(n>0) {
    	    t = (t*b[n%10]) % 10;
    	    n /= 5;
    	    sum = (sum+n)%4;
    	}
    	
    cout<<(a[t/2-1][sum])<<endl;

    }

	return 0;
}
