#include <iostream>

using namespace std;

class A{
public:
 
    A(int a=10):a_(a){};

    void func1()
    {
       cout<<"func1"<<endl;
    }

    void func2()
    {
       cout<<"func2"<<endl;
       cout<<a_<<endl;
    }

private:
	int a_;

};




int main()
{

    A* a = NULL;

    a->func1();

    a->func2();

	return 0;
}