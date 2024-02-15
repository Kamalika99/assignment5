#include<stdio.h>
int main()
{
 int count=0,flag=0;
char c[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'};
char input[20];
printf("Enter the string:");
scanf(" %s",&input);
while(input[count] != '\0')
{
count++;
}
for(int i = 0; i < count; i++)
{
for(int j = 0; j < 23; j++)
{
if(input[i] == c[j])
{
flag++;
}}}
if(flag == count)
{
printf("Can be made\n");
}
else
{
printf("Cant be made\n");
}
return 0;
}