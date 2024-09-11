//Program to check whether the no is prime or not
#include<stdio.h>
int main()
{
	int n, i, temp=0;
	printf(" Enter the no to be checked:");
	scanf("%d",&n);
	
	for(i=2; i<=n; i++);
	{
		if(n%i==0)
		{
			temp++;
			
		}
	}
	
	if(temp==1)
	{
		printf("%d is a prime no",&n);
	}
	else
	{
		printf("%d is not a prime no ", &n);
	}
	
	return 0;
}
