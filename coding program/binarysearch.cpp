#include<iostream>
using namespace std;

int BinarySearch(int [],int n ,int x );

int main()
	{
		int A[8];
		int x=0;
		cout<<"Enter 8 no's in array\n";
		for(int i=0; i<8; i++)
			{
				cin>>A[i];
			}
		cout<<"Enter no for search\n";
		cin>>x;
		
		int q=BinarySearch(A,8,x);
		if(q)
			{
				cout<<"found at index="<<q<<" and "<<"position="<<q+1;
			}
		else
			cout<<"not found!!!!!!";
		return 0;
	}

int BinarySearch(int A[],int n ,int x )
	{
		int start=0;
		int end=n;
		int mid=0;
		
		while(start<=end)
			{
				mid=(start+end)/2;
				
				if(A[mid]==x)
					{
						return mid;
					}	
				else if(A[mid]>x)
					{
						end=(mid-1);
					}
				else
					start=(mid+1);
			}
		return 0;
	}
