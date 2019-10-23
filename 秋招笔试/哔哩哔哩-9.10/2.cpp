//

#include <iostream>

using namespace std;

class base
{
public:
	base();
	~base();
	
public:
    virtual void func()
    {
    	cout<<"hello,virtual"<<endl;
    }	
};

class derived : public base
{
public:
	derived();
	virtual ~derived();
	
public:
	virtual void func()
	{
		cout<<"hello,virtual derived"<<endl;
	}

};


int main()
{
    base* b = new derived(); //
    b -> base();

    b -> func();

	return 0;
}

// error : [Error] invalid use of 'base::base'