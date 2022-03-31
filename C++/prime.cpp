#include<iostream>
using namespace std;

int main()
{
	int a,flag=0;
	cout<<"Enter";
	cin>>a;
	for(int j=1;j<=a;j++)
	{
		

	
		for(int i=2;i<j/2;i++)
			{
				if(a%i==0)
					{
			
						flag=1;
					}
			}
	
		if(flag==1)
			{
				cout<<j;
			}
		
	}
	return 0;
}
