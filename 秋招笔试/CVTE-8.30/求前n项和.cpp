/************************************

分子： 2n+1
分母： n*（n+1）

求前n项和

*************************************/

#include <iostream>

using namespace std;

int main()
{
    int N,i=1;  cin>>n;

    int sum = 0;

    while(i<=N)
    {
        sum += ( (2*i+1) / (i+1)*i );
        i++;
    }

    cout<<sum<<endl;

	return 0;
}