#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int j,n;
	char ch[8],tran[80];
	printf("input cipher code: ");
	gets(ch);
	printf("\ncipher code :%s",ch);
	j=0;
	while(ch[j]!='0')
	{
		if((ch[j]>='A')&&(ch[j]<='Z'))
		{
			tran[j]=155-ch[j];
		}
		else if((ch[j]>='a')&&(ch[j]<='z'))
		{
			tran[j]=219-ch[j];
		}
		else
		{
			tran[j]=ch[j];
		}
		j++;
	 } 
	 n=j;
	 printf("\noriginal text: ");
	 for(j=0;j<n;j++)
	 {
	 	putchar(tran[j]);
	 }
	 printf("\n");
	return 0;
}
