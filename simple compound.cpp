/*to calculate simple interst and compund interest*/
#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r,s,c,n ;
	printf("enter principal amount,time in years,rate of interest,n");
	scanf("%d%d%d%d",&p,&t,&r,&n);
	s=(p*t*r)/100;
	printf("simple interest= %d",s);
	c=p*(pow(1+(r/n),n*t));
	printf("compound interst= %d",c);
	return 0;
}
