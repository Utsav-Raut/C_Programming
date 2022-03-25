#include<stdio.h>

int sum(int n);

int main()
{
    printf("Enter the numbers of terms whose sum you want to find:\n");
    int num, result;
    scanf("%d",&num);

    result = sum(num);

    printf("The sum of first %d numbers = %d\n", num, result);
}

int sum(int n)
{
    if(n != 0)
        return n + sum(n-1);
    else
        return 0;
}