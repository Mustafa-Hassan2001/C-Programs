#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				 {
				 	printf("boht hard");
					exit(0);
					break;
				 }
			case 0:
				{
					if(i==n)
					{
					 	printf("chu ho tum");
					}
					else
						break;	
				}
			
		}
	}
	return 0;
}

