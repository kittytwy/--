#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m,i,j,s;
	for(m=6;m<1000;m++)
	{
		s=1;
		for(i=1;i<m;i++)
		{
			if(m%i==0)
			{
				s=s-i;
			}
			if(m-s==0)
			{
				printf("%5d its fastors are 1 ",m);
			}
		}
		for (j=2;j<m;j++)
		{
			if(m%j==0)
			{
				printf("%d",j);
				printf("\n");
			}
		}
	 } 
	return 0;
}
