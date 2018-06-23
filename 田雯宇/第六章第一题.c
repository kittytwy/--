#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[100],i,j,k=0;
	for(i=0;i<100;i++)
	{
		a[i]=i+1;
		a[0]=0;
		for(i=0;i<100;i++)
		{
			for(j=i+1;j<=100;j++)
			{
				if(a[i]!=0&&a[j]!=0)
				{
					if(a[j]%a[i]==0)
					{
						a[j]=0;
					}
				}
			}
		}
	}
	printf("筛选法求出100以内的素数为： \n");
	for(i=0;i<100;i++)
	{
		if(a[i]!=0)
		{
			printf("%4d",a[i]);
			k++;
		}
		if(k%10==0)
		{
			printf("\n");
		}
	}
	getch();
	return 0;
}
