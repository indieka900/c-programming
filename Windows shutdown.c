#include<stdio.h>
#include<stdlib.h>  
#include<windows.h>

int main()
{

    char ch;
 	system("color 0a"); 
    printf("\tWhat do you want to do to your PC- (y/n) ?\n\n");
    printf("\t\tPress Y to shutdown\n");
    printf("\t\tPress R to restart\n\n");
    scanf("%c", &ch);

    if(ch == 'y' || ch == 'Y')
    {
        system("C:\\WINDOWS\\System32\\shutdown -s");
    }
    else if(ch == 'R' || ch == 'r')
	{
   	    system("C:\\WINDOWS\\System32\\shutdown -r");
	}
	else
	{
		printf("INVALID CHOICE");
	}

    return 0;
}