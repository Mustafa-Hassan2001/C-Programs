#include<iostream>
using namespace std;

int bubsort(int A[],int n);

int main()
	{
		int A[5];
		cout<<"Enter array for sorting\n";
		for(int i=0;i<5;i++)
			{
				cin>>A[i];
			}
		bubsort(A,5);
		for(int i=0;i<5;i++)
			{
				cout<<A[i]<<" ";
			}
		return 0;
	}
int bubsort(int A[],int n)
	{
		int temp=0;
		for(int i=0;i<n;i++)
			{
				for(int j=0;j<n-1-i;j++)
					{
						if(A[j]>A[j+1])
							{
								temp=A[j];
								A[j]=A[j+1];
								A[j+1]=temp;
							}
					}
			}
		return 0;
	}
