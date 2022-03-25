#include<stdio.h>
int main()
{
	int num1 = 10, num2 = 20;
	printf("Before swapping, num1 = %d and num2 = %d\n",num1,num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("After swapping, num1 = %d and num2 = %d\n",num1,num2);

	return 0;
}
