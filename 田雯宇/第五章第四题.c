#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;
	int i=0,j=0,k=0,l=0; 
	while("(c=getchar())!=\n")
	{
		if(c>=65&&c<=90||c>=97&&c<=122)
		{
			i++;
		}
		else if(c>=48&&c<=57)
		{
			j++;
		}
		else if(c==32)
		{
			k++;
		}
		else
		{
			l++;
		}
	}
	printf("i=%d,j=%d,k=%d,l=%d\n",i,j,k,l);
	return 0;
}
