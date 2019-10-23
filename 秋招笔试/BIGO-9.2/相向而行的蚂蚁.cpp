#include <iostream>

using namespace std;

void getMinMaxTime(int length,int ant_cnt,int[] position,int *min,int *max)
{
	int speed=1;  //

	int temp_max=0;
	int temp_min=0;

	for (int i = 0; i < ant_cnt; ++i)
	{
		min[i]=0;
		max[i]=0;

		temp_max=0;
		temp_min=0;

		if(position[i]<length/2)  // 
		{
             temp_max=(length-position[i])/speed;
             temp_min=(position[i])/speed;
		}
		else                     //
		{
             temp_max=position[i]/speed;
             temp_min=(length-position[i])/speed;
		}

		if(max[i]<temp_max)
			max[i]=temp_max
		if(min[i]>temp_min)
            min[i]=temp_min;

	}
}