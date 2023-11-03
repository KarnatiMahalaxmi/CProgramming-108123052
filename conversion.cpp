/*to convert km into m,cm,mm*/
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("value in Km =");
scanf("%d",&a);
//to convert km into m/
b=a*1000;
printf("value in m= %d\n",b);
//to convert km into cm/
c=a*100000;
printf("value in cm=  %d\n",c);
//to convert km into mm/
d=a*1000000;
printf("value in mm= %d",d);
return 0;
}
