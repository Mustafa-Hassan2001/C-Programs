#include<stdio.h>
int main()
{
	int h;
	int b;
	float area;
	
	printf("Enter height: ");
	scanf("%d",h);
	printf("Enter base: ");
	scanf("%d",b);
	area = 0.5*h*b;
	printf("Area is %f",area);
	return 0;
}
