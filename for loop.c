#include <stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=50;i++){
		if (i%7==0){
			printf("%d\t",i);
			sum+=i;
			
		}	
	}
	printf("\nThe sum is %d",sum);
	return 0;
}