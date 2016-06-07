#include<stdio.h>
int main()
{
int yr;
scanf("%d",&yr);
if(yr%4==0)
{
if(yr%100==0)
{
if(yr%400==0)
printf("The year is leap year:");
else
printf("The year is not leap year:");
}
else
printf("The year is leap year:");
}
else
printf("The year is not leap year:");
}
