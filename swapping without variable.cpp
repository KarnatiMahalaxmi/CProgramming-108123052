/*to swap two numbers without 3rd variable */
#include<stdio.h>
int main ()
{
int a,b;
printf("first number=");
scanf("%d",&a);
printf("second number=");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d",a,b);
return 0;
}
