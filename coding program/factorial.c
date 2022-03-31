#include<stdio.h>

int fact(int);
int main()
{
	int i;
	printf("Enter a number:\t");
	scanf("%d",&i);
	printf("factorial of the number is %d",fact(i));
}
int fact(int i)
{
	if (i==0)
	return 1;
	else
	return (i*fact(i-1));
}
