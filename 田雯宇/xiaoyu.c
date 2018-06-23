#include <stdio.h>
int main()
{
    int number;
    double a;
    printf("输入一个小于1000的正数");
    scanf("%d",&number);

    if(number>0 && number<1000)
    {
        a = sqrt(number);
        printf("它的平方根：%2.0f",a);
    }
    else
    {
        printf("请重新输入数值");

    }
    
}

