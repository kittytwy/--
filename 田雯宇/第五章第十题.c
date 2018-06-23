#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i=1, n;
	double t,s,x=1,y=2,sum=0;
	scanf("%ld",&n);
	while(i<=n)
	{
		s=y/x;
		sum=sum+s;
		t=y;
		y=y+x;
		x=t;
		i++;
	}
	printf("%f\n",sum);
	return 0;
}
