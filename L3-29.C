//Palindrome
#include<stdio.h>
int main()
{
	int n,remainder,original,reversed=0;
	printf("Enter the number:");
	scanf("%d", &n);
	original=n;
	
	while(n!=0)
	{
		remainder = n %10;
		reversed=reversed*10+remainder;
		n=n/10;
		
	}
	
	if(original==reversed)
	{
	     printf("No is Palindrome. ");	
	}
	else
	{
		printf("NO is not a palindrome.");
	}
	
	return 0;
}
