//Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
#include<stdio.h>
main()
{
	int bs,hra,da,ta,sum;
	printf("Enter base Salary :");
	scanf("%d",&bs);
	hra = bs * 10 / 100;
	da = bs * 5 / 100;
	ta = bs * 8 / 100;	
	sum = bs + hra + da + ta;
	printf("gross salary=%d",sum);
}