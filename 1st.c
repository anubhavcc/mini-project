#include<stdio.h>
#include"a.h"
int sum();
int main()
{
	printf("calling foo function\n"); 
	foo();
	int a,b;
	a=10;b=20; 
	printf(" foo function called\n");
	printf("the sum is:%d",sum(a,b));

	return 0;
}
int sum(int a,int b)
{
	return a+b;
}



