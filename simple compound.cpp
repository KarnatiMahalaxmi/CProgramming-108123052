/*to calculate simple interst and compund interest*/
#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r,s,c,n;
	printf("enter principal amount,time in years,rate of interest");
	scanf("%d%d%d",&p,&t,&r);
	s=p*t*r/100;
	printf("simple interest=");
	scanf("%d",&s);
	c=p*(pow(1+(r/n),n*t));
	printf("compound interst=");
	scanf("%d",&c);
	return 0;
}
