#include<iostream.h>
#include<conio.h>
class xyz; //forward declaration
class abc
{
	int a;
	int b;
	public:
	friend void dost(abc,xyz);
	void get_data()
	{
		cout<<"Enter value of a and b ";
		cin>>a>>b;
	}
};
class xyz
{
	int x;
	int y;
	public:
	friend void dost(abc,xyz);
	void get_data()
	{
		cout<<"Enter value of x and y ";
		cin>>x>>y;
	}
};
void dost(abc a,xyz b)
{
	int sum;
	a.get_data();
	b.get_data();
    sum=a.a+a.b+b.x+b.y;
  	cout<<"The answer is "<<sum<<endl;	
}
int main()
{
    abc add;
	xyz product;
	dost(add,product);
	getch();
	return 0;	
}