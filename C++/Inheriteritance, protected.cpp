#include<iostream.h>
#include<conio.h>
class a
{
	protected://with protected the prive variable of base class can be 
	int a;						//used till the next drived class
	public:
	void data1()
	{
		a=10;
		cout<<a<<endl;
	}
};
class b:public a 
{
	int b;
	public:
	void data2()
	{
		b=20;
		cout<<b<<endl;
	}
	void dataA()
	{
		a=50;
		cout<<a<<endl;
	}
};
int main()
{
	b value;
	value.data1();
	value.data2();
	value.dataA();
	getch();
	return 0;
}