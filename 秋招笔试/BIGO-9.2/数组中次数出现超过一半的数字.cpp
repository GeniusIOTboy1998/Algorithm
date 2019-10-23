#include <iostream>

using namespace std;

int NumberAppearMoreThanHalf(int[] array)
{
	int res=array[0],count=1;

	for (int i = 0; i < array.size(); ++i)
	{
		if(array[i]==res)
			count++;
		else
			count--;

		if(count==0)
		{
			res=array[i];
			count=1;
		}
	}

	count=0;
	for (int i = 0; i < array.size(); ++i)
	{
		if(array[i]==res)
			count++;
	}

	return res;
}