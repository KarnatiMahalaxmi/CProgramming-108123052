/*to calculate percentage of a student given the marks of 5 different subjects*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the 5 subject marks");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
f=(a+b+c+d+e)/5;
printf("the percentage of the student is ,%d %",f);
return 0;
}
