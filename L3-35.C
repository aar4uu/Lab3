//read a number n and print sum in single digit
#include<stdio.h>
int main()
{
	int n,sum=0,result;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n/10!=0)
	{
		sum=0;
		while(n!=0)
		{
		result=n%10;
		sum=sum+result;
		n=n/10;
	       }
	       n=sum;
	}
	printf("%d",sum);
	return 0;
}
