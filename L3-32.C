//to find first max and second max from n nos.
#include<stdio.h>
int main()
{
	int fmax=0,smax=0,n;
	
	while(n!=0)
	{
		printf("Enter any number:");
		scanf("%d",&n);
		if(n>fmax)
		{
			smax=fmax;
			fmax=n;
		}
		else if(smax<n)
		{	
		smax=n;
		}
		
	}
	printf("First maximum number:%d",fmax);
	printf("Second maximum number:%d",smax);
	return 0;
	
	
}
