#include<stdio.h>

int checkPrime(int n);

int main()
{
    printf("Enter a number to check whether it is prime or not.\n");
    int num, flag;
    scanf("%d",&num);

    flag = checkPrime(num);

    if (flag == 1)
    {
        printf("The entered number %d is a prime number.\n",num);
    }
    else
    {
        printf("The entered number %d is not a prime number.\n",num);
    }
}

int checkPrime(int num)
{
    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}