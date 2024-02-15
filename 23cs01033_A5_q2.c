#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("enter dividend,divisor");
    scanf("%d%d",&a,&b);
    while (a>=b)
    {
        a=a-b;
        count++;
    }
    printf("remainder is %d\n",a);
    printf("quotient is %d",count);
    return 0;
}