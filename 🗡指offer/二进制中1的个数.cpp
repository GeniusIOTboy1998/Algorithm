#include <iostream>

using namespace std;

//

int NumberOf1(int n)
{
	int numberCount=0;
	
	for(numberCount=0;n;n >>=1)
	{
		numberCount +=n & 0x1;
	} 
	return numberCount;
}

int NumberOf2(int n)
{
	int numberCount=0;
	
	while(n){
		numberCount++;
		n &= n-1;
	}
	return numberCount;
}

int main()
{
	int n; cin>>n;
	cout<<NumberOf1(n)<<endl;
	int m; cin>>m;
	cout<<NumberOf2(m)<<endl;
	return 0;
}
