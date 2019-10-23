//

#include <iostream>

using namespace std;

char *get()
{
    char data[16] = "hello,world";
    return data;
}

int main()
{
    char *p=get();

    cout<<p<<endl;

	return 0;
}

//	[Warning] address of local variable 'data' returned [-Wreturn-local-addr]