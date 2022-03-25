#include<stdio.h>
int main()
{
	char operator;
	double num1, num2;

	printf("Please enter the operator: ");
	scanf("%ch",&operator);
	printf("\nPlease enter the numbers to be operated upon\n");
	scanf("%lf %lf",&num1, &num2);

	switch(operator)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n",num1, num2, num1+num2);
			break;

		case '-':
			printf("%.1lf - %.1lf = %.1lf\n",num1, num2, num1-num2);
			break;

		case '*':
			printf("%.1lf * %.1lf = %.1lf\n",num1, num2, num1*num2);
			break;

		case '/':
			printf("%.1lf / %.1lf = %.1lf\n",num1, num2, num1/num2);
			break;

		default:
			printf("Wrong operator entered\n");
			break;
	}
}
