#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = (arr + 2);

    printf("*ptr = %d\n",*ptr);
    printf("*(ptr+1) = %d\n",*(ptr+1));
    printf("*(ptr-1) = %d\n",*(ptr-1));

}