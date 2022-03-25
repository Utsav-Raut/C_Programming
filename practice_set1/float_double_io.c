#include<stdio.h>
int main()
{
	float num1;
	double num2;

		printf("Enter a floating point number:");
		scanf("%f",&num1);
		printf("\nEnter a double number:");
		scanf("%lf",&num2);

		printf("\nThe entered floating point number is:%f",num1);
		printf("\nThe entered double number is:%lf\n",num2);

		return 0;
}
