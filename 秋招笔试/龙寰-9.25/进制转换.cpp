#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int n; cin>>n;
	char ans[31]; 
	
	int d=15,num=0;
	do{
		int temp = n%d;
		
		switch(temp)
		{
			case 10 : 
			      ans[num++] = 'A';
			      break;
			case 11 : 
			      ans[num++] = 'B';
			      break;
			case 12 : 
			      ans[num++] = 'C';
			      break;
			case 13 : 
			      ans[num++] = 'D';
			      break;
			case 14 : 
			      ans[num++] = 'E';
			      //cout<<1;
			      break;
			default:
				ans[num++] = 'temp';
		}
		n/=d;
	}while(n != 0);

	
	for(int i=0; i<=num; ++i)
	{
		cout<<ans[i];
	}
	
	return 0;
} 