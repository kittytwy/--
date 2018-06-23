#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,sum=0,i=1,s=2;
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+s;
		s=s+2*pow(10,i);
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}
