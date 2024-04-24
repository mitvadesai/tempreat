// Write a Program to convert temperature from degrees Celsius to Fahrenheit.
#include<stdio.h>
main()
{
	int c,f;
	printf("enter value c :");
	scanf("%d",&c);
	f =   c * 9/5 + 32;
	printf("ans=%d",f);
}