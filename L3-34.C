// fibonacci series
#include<stdio.h>
int main()
{
	int f1,f2,f,n,i=1;
	f1=0;
	f2=1;
	
	printf("Enter number of terms in fibonacci series");
	scanf("%d",&n);
	
	printf("\n %d %d ", f1,f2);
	for (i=2;i<n;i++ )
	{
		f=f1+f2;
		printf("\n  %d", f);
		f1=f2;
		f2=f;
	}
	
	return 0;
}
	
	
	
	
