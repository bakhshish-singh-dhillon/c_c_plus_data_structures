#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
	ofstream fout("Data");
	char ch[10];
	cout<<"Enter your name ";
	cin>>ch;
	fout<<ch;
	fout.close();
	ifstream fin("Data");
	while(fin.eof()!=1)
	{
		fin.getline(ch,10);
		cout<<ch;
	}
	fin.close();
	getch();
	return 0;
}