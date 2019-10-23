#include <iostream>

using namespace std;

class A{
public:
    	A(int a)
    	{
    		x=a;
    		c++; 
    	}

    static int c;	
    int getX(){ return x; }
private:
	int x;
};

int A::c=1;

int main()
{ 
    A a(2);

    int *count=&A::c;

    cout<<*count<<endl;

	return 0;
}