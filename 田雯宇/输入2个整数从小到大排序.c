#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[4],i,j;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		{
			int t;
			if(a[i]>a[j])
			{
				t = a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
	 
	return 0;
}
