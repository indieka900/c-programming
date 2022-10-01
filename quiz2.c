#include <stdio.h>
#include <math.h>
int main()
{
	int a,x,b;
	float y=0;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of x: ");
	scanf("%d",&x);
	y = (a*(x*x*x)-(b*(x*x))-6);
	printf("The value of y is %f",y);
	return 0;
}