#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int chengJi;
	printf("输入成绩: ");
	scanf("%d",&chengJi);
	
	if(chengJi>=90)
	{
		printf("成绩等级为A");
	}
	else if(chengJi<89&&chengJi>80)
	{
		printf("成绩等级为B");
	}
	else if(chengJi<79&&chengJi>70)
	{
		printf("成绩等级为C");
	}
	else if(chengJi<69&&chengJi>60)
	{
		printf("成绩等级为D");
	}
	else 
	{
		printf("成绩等级为E");
	}
	return 0;
}

