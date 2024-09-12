//value of y
#include<stdio.h>
#include<math.h>
int main()
{
	int n,x;
	printf("Enter the value of x:");
	scanf("%d", &x);
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	if(n=1)
	{
		printf("%d", 1+x);
	}
	else if(n=2)
	{
		printf("%d", 1+x/n);
	}
	else if(n=3)
	{
		printf("%d", 1+pow(n,x));
	}
	else
	{
		printf("%d", 1+x*n);
	}
	
	return 0;
} 
