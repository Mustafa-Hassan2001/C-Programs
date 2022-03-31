#include<iostream>
//#include<stdio.h>
//#include<conio>
using namespace std;

/*int entry(int x[][3])
{
	int i,j;
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					cin>>x[i][j];
				}
		}
	return 0;
}*/

int disp(int x[][3])
{
	int i,j;
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					cout<<x[i][j]<<" ";
				}
				cout<<endl;
		}
	return 0;
	
}

int add(int x[][3],int y[][3],int z[][3])
{
	int i,j;
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					z[i][j]=x[i][j]+y[i][j];
				}
		}
}

int sub(int x[][3],int y[][3],int z[][3])
{
	int i,j;
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					z[i][j]=x[i][j]-y[i][j];
				}
		}
}

/*int multi(int x[][3],int y[][3],int z[][3])
{
	int i,j;
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					
				}
		}
}*/

int multi(int x[][3],int y[][3],int z[][3])
{
	int i,j,k;
	for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
				{z[i][j]=0;
					for (k=1;k<=3;k++)
						{
							z[i][j]=(z[i][j]+(x[i][k]*y[k][j]));
						}	
				}
		}
}

int main()
{
	int a[3][3]={1,2,1,2,3,1,4,1,1};
	int b[3][3]={2,1,2,1,2,1,3,4,1};
	int c[3][3]= {2,1,1,1,1,1,1,1,1};
/*	cout<<"enter matrix\n";
	entry(a);
	cout<<"enter matrix\n";
	entry(b);*/
	cout<<"display matrix\n";
	cout<<"#1 mat\n";
	disp(a);
	cout<<"_____________\n";
	cout<<"#2 mat\n";
	disp(b);
	cout<<"_____________\n";
	add(a,b,c);
	cout<<"addition\n";
	disp(c);
	cout<<"_____________\n";
	sub(a,b,c);
	cout<<"subtraction\n";
	disp(c);
	cout<<"_____________\n";
	multi(a,b,c);
	cout<<"multiplication\n";
	disp(c);
	return 0;
}





