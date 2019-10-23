
#include <iostream>

using namespace std;

int main()
{
	int k=1;
    
    while(k<7)
    {
    	if(k%2)
    	{
    		k+=3;
    		continue;
    	}
    	k+=1;
    }

	return 0;
}