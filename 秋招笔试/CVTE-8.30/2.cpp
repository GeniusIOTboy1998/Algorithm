#include <iostream>

using namespace std;

void func()
{
	a=100;
	b=200;
}


int main()
{
    int a=5,b=7;

    func();

    cout<<a<<b<<endl;

	return 0;
}

// 执行出错