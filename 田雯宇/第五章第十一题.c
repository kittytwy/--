#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,n;
	double h=100,s=100;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		h=h*0.5;
	
		if(i==1)
		{
			continue;
		    s=2*h+s;
		}
	 } 
	 printf("h=%f,s=%f\n",h,s); 
	return 0;
}
