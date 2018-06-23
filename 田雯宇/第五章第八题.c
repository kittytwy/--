#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x=100,a,b,c;
	while(x>=100&&x<1000)
	{
		a=0.01*x;
		b=10*(0.01*x-a);
		c=x-100*a-10*b;
	 } 
	 if(x==(pow(a,3)+pow(b,3)+pow(c,3)))
	 {
	 	
	 	x++;
	 }
	 printf("%5d\n",x);
	return 0;
}
