#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	char str1[100],str2[100];
	printf("input string 2: ");
	scanf("%s",str2);
	for(i=0;i<=strlen(str2);i++)
	{
		str1[i]=str2[i];
		
	 } 
	 printf("str1:%s\n",str1);
	return 0;
}
