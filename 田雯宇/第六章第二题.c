#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,j,min,temp,a[11];
	printf("enter data: \n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 printf("\n");
	 printf("the orignal number: \n");
	 for(i=1;i<=10;i++)
	 {
	 	printf("%5d",a[i]);
	 }
	 printf("\n");
	 for(i=1;i<=9;i++)
	 {
	 	min=1;
	 	for(j=i+1;j<=10;j++)
	 	{
	 		if(a[min]>a[j])
	 		{
	 			min=j;
			 }
		 }
		 temp=a[i];
		 a[i]=a[min];
		 a[min]=temp;
	 }
	 printf("\nthe sorted numbers: \n");
	 for(i=1;i<=10;i++)
	 {
	 	printf("%5d",a[i]);
	 }
	 printf("\n");
	return 0;
}
