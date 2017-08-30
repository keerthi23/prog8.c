#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%4==0)
{
if(a%100==0)
{
if(a%400==0)
{
printf("the given year is leap year");
}
else
{
printf("the given year is not aleap year");
}}
else
{
printf("it is not a leap year");
}}
else
{
printf("it is not a leap year");
}
return 0;
}
