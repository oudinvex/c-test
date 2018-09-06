#include<iostream>
using namespace std;
int add(int ,int);
int add(int,int,int);
double add(double,double);
int main()
{
	int * p1=new int;
	int *p2 = new int[100];
	*p1=100;
	p1[0]++;

	p2[0]=1;
	p2[1]=1;
	p2[2]=1;
	int& i=*p1;
	cout<<sizeof (p1)<<endl;
	cout<<sizeof (p2)<<endl;
	delete p1;
	delete []p2;
int a,b,c;
	a=b=c=1;
double d,e;
d=e=1.2;
	cout<<add(a,b,c)<<endl;
	cout<<add(a,b)<<endl;
	cout<<add(d,e)<<endl;	
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{

	return a+b+c;
}

double add(double a,double b)
{
	return a+b;
}
