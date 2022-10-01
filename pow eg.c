#include <stdio.h>
int main()
{
	int i,z;
	printf("N\tN1\tN2\tN3\tN4\n");
	for(i=7;i<=35;i+=7)
	{
		z = pow(i,2);
		printf("%d\t%d\t%d\t%d\t%d\n",i,z,i+3,i+6,i*9);
	}
	return 0;
}