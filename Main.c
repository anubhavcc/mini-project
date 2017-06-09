#include<stdio.h>
#include"foo.h"

int main() {
	int number_1,number_2;
	printf("Enter the first number to be added\n");
	scanf("%d",&number_1); 
	printf("Enter the second number to be added\n");
	scanf("%d",&number_2);
	foo(number_1,number_2);
	return 0;
}




