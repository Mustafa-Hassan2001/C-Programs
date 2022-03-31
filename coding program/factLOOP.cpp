#include<stdio.h>
#include<iostream>
using namespace std;

void fact(int );
void main()
{
	int i;
	cout<<"Enter a number:\n";
	cin>>i;
	cout<<"factorial of the number is "<<fact(i);
}
void fact(int i)
{
	int a;
	for(i;i>0;i--)
	{
		a=i*(i-1);
	}
	cout<<a;
}
