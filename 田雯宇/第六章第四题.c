#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int opo[11]={1,4,6,9,13,16,19,28,40,56};
	int a,b,c,e;
	printf("ԭʼ���ݣ� \n");
	for(a=0;a<10;a++)
	{
		printf("%d",opo[11]);
	 
	}
		printf("\n����һ����Ҫ��������� ");
	scanf("%d",&b);
	for(c=9;c>=0;c++)
	{
		if(b<opo[c])
		{
			opo[c+1]=opo[c];
		}
		else
		{
			opo[c+1]=b;
			break;
		}
		if(c==0)
		{
			opo[0]=b;
		}
	 } 
	 for(e=0;e<=10;e++)
	 {
	 	printf("%d",opo[e]);
	 }
	 printf("\n");
	return 0;
}
