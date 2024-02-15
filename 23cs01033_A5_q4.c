#include<stdio.h>
int main()
{
    int i,space,p,size,n;
    printf("Enter the number of rows:");
    scanf("%d",&size);
    n=size;
    for(i=1;i<=size;i++)
    {
        for(space=1;space<=n;space++)
        {
            printf(" ");
        }
        n--;
        for(p=1;p<=i;p++)
        {
            printf("* ");
        }
        printf("\n");
        }
        return 0;
        }
    