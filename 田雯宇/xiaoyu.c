#include <stdio.h>
int main()
{
    int number;
    double a;
    printf("����һ��С��1000������");
    scanf("%d",&number);

    if(number>0 && number<1000)
    {
        a = sqrt(number);
        printf("����ƽ������%2.0f",a);
    }
    else
    {
        printf("������������ֵ");

    }
    
}

