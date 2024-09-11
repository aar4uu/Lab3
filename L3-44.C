//ELECTRICITY AND ITS CHARGES
#include<stdio.h>
int main()
{
	float unit,charge;
	printf("Enter the units consumed:");
	scanf("%f",&unit);
	if(0<=unit<=200)
	{
		charge=0.5*unit;
	}
	else if(200<unit<=400)
	{
		charge=100+(unit-200)*0.65;
	}
	else if(400<unit<=600)
	{
		charge=230+(unit-400)*0.8;
	}
	else
	{
		charge=425+(unit-600)*1.25;
	}
	printf("Amount to be paid:%f",charge);
	return 0;
}
