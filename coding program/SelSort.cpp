#include<iostream>
using namespace std;

int Selsort(int A[],int n);

int main()
	{
		int A[6];
		int n=0;
		cout<<"Enter 6 nos in array for sorting \n";
		for(int i=0;i<6;i++)
			{
				cin>>A[i];
			}
		Selsort(A,6);
		for(int i=0;i<6;i++)
			{
				cout<<A[i]<<" ";
			}
		return 0;
	}

int Selsort(int A[],int n)
	{
		int imin,temp;
		for(int i=0;i<(n-1);i++)
			{
				imin=i;
				for(int j=(i+1);j<n;j++)
					{
						if(A[imin]>A[j])
							{
								imin=j;
							}
					}
						temp=A[i];
						A[i]=A[imin];
						A[imin]=temp;	
					
			}
		return 0;
	}
