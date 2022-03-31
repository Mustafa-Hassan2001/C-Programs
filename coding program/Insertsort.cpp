#include<iostream>
using namespace std;

int InsertionSort(int [],int );

int main()
	{
		int A[6];
		cout<<"Enter array for sorting \n";
		for(int i=0;i<6;i++)
			{
				cin>>A[i];
			}
		InsertionSort(A,6);
		for(int i=0;i<6;i++)
			{
				cout<<A[i]<<" ";
			}
	}
int InsertionSort(int A[],int n)
	{	
		int val;
		int hole;
		for(int i=1;i<n;i++)
			{
				val=A[i];
				hole=i;
				while( hole>0 && A[hole-1]>val )
					{
						A[hole]=A[hole-1];
						hole-=1;
					}
				A[hole]=val;
			}
	}
