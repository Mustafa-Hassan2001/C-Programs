#include<iostream>
using namespace std;
int main()
	{	
		int A[10];
		int sum=0;
		cout<<"Enter 10 no's for summation\n";
		for(int i=0;i<10;i++)
			{
				cin>>A[i];
			}
		for(int j=0;j<10;j++)
			{
				sum+=A[j];
			}
		cout<<"Sum is "<<sum;
		return 0;
	}
