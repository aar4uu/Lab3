//max and mini from n no.
#include<stdio.h>
int main()
{
	int max,mini,n,i,x;
	printf("Enter the no of value of N:");
	scanf("%d", &n);
	max=0;
	mini=999;
	for(i=1;i<=n;i++)
	{
		printf("Enter x-%d: ", i);
		scanf("%d", &x);
		
		if(max<x)
		{
			max=x;
		}
		
		if(mini>x)
		{
			mini=x;
		}
	}
	
	printf("\n Maximum= %d", max);
	printf("\n Minimum=%d", mini);
	
	return 0;
	
}

