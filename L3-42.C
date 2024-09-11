//n is prime or composite
#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter a no:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		c=c+1;
	}
	if(c==2)
	printf("The no is prime");
	else
	printf("The no is composite");
	return 0;
	
}

