/*to swap two numbers*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("first number=");
scanf("%d",&a);
printf("second number=");
scanf("%d",&b);
//asign the value of c to b/
c=b;
//asign the value b to a/
b=a;
a=c;
printf("%d %d",a,b);
return 0;
}
