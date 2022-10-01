#include <stdio.h>
int main()
{
	int m,n,a,b,c,d,e,f,g,h;
	Safaricom:
	printf("safaricom+\nm-pesa\n");
	printf("enter your option:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("My account\nM-banking services\n");
		printf("enter your option:");
		scanf("%d",&m);
		
		if(m==1){
			printf("Balance enquiry\nTop-up\nSalfcare\nCustomer care");
		}
		else if(m==2)
		{
			printf("Barclays Bank\nCo-op bank\nDBT\nEcobank\nEquity bank\nFamily Bank\nMore option");
		}
		else
		{
			goto Safaricom;
		}
	}
	
	else if(n==2)
	{
		printf("send money\nwithdraw cash\nbuy airtime\nloans and savings\nlipa na m-pesa\nmy account\n");
		printf("enter your option:");
		scanf("%d",&a);
		if(a==1)
		{
			printf("enter phone number:");
		}
		else if(a==2)
		{
			printf("from Agent\n from ATM\n");
			printf("enter your option:");
			scanf("%d",&b);
			if(b==1)
			{
				printf("enter agent number:");
			}
			else if(b==2)
			{
				printf("enter Agent number:");
			}
			else
			{
				goto Safaricom;
			}
		}
		else if(a==3)
		{
			printf("My phone\nOther phone\n");
			printf("enter your option:");
			scanf("%d",c);
			if(c==1)
			{
				printf("enter amount:");
			}
			else if(c==2)
			{
				printf("enter phone number:");
			}
			else
			{
				goto Safaricom;
			}
		}
			else if(a==4)
		{
			printf("M-shwari\nKCB M-pesa\n");
			printf("enter your option:");
			scanf("%d",d);
			if(d==1)
			{
				printf("activate");
			}
			else if(d==2)
			{
				printf("activate");
			}
			else
			{
				goto Safaricom;
			}
		}
		else if(a==5)
		{
			printf("Pay bill\nBuy goods and services\npochi la biashara\n");
			printf("enter your option:");
			scanf("%d",e);
			if(e==1)
			{
				printf("Search Sim Contacts\nEnter business number\n");
				printf("enter your option:");
				scanf("%d",&f);
				if(f==1)
				{
					printf("enter name:");
				}
				else if(f==2)
				{
					printf("enterb business number:");
                }
					else
					{
						goto Safaricom;
					}
			}
			
			else if(e==2)
			{
				printf("enter till number:");
			}
			else if(e==3)
			{
				printf("enter phone number:");
			}
			else
			{
				goto Safaricom;
			}
		}
		
			else if(a==6)
		{
			printf("Mini Statement\nCheck Balance\nChange Pin\nchange language\nUpdate customer Menu\n");
			printf("enter your option:");
			scanf("%d",g);
			if(g==1)
			{
				printf("enter M-pesa pin:");
			}
			else if(g==2)
			{
				printf("enter M-pesa pin");
			}
			else if(g==3)
			{
				printf("enter old M-pesa pin");
			}
			else if(g==4)
			{
				printf("English\nKiswahili\n");
				printf("enter your option:");
				scanf("%d",&h);
				if(h==1)
				{
					printf("enter m-pesa pin:");
				}
				else if(h==2)
				{
					printf("enter m-pesa pin:");
				}
				else
				{
					goto Safaricom;
				}
			}
			else if(g==5)
			{
				printf("enter M-pesa pin");
			}
			else
			{
				goto Safaricom;
			}
		}
		
		else
		{
			goto Safaricom;
		}
    }
		else
	{
		printf("thankyou for visiting us");
		
	}
	
	return 0;
}