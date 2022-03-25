#include<stdio.h>

void swap(int *var1, int *var2)
{
    int temp = 0;
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main()
{
    int num1 = 10, num2 = 75;
    printf("Original values of num1 and num2 = %d, %d respectively.\n",num1, num2);

    swap(&num1, &num2);
    printf("Values of num1 and num2 after swap = %d, %d respectively.\n",num1, num2);
}