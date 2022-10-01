#include <stdio.h>
int main()
{
	int u,a,t,v,s;
	printf("Enter the intial velocity u: ");
	scanf("%d",&u);
	printf("Enter the acceleration of the object a: ");
	scanf("%d",&a);
	printf("Enter the time t: ");
	scanf("%d",&t);
	v = u + (a*t);
	s = (u*t) + (a*(t))/2;
	printf("\n\nThe final velocity v is: %dm\\s",v);
	printf("\nThe displacement s  is: %dm\n\n",s);
	return 0;
}