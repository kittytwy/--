#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i=1 ,sum=0;
	for(i=1;i<=10;i++)
	{
		sum=2*sum+1;
	}
	printf("sum=%d\n",sum);
	return 0;
}
