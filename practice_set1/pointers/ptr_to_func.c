#include<stdio.h>

int addOne(int *x)
{
    (*x)++;
}
int main()
{
    int *ptr, var = 1;
    printf("Initial Value of var is = %d\n",var);
    ptr = &var;
    addOne(ptr);
    printf("Value of var is = %d\n",var);
    return 0;
}