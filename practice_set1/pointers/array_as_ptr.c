#include<stdio.h>

int main()
{
    int arr[4];

    for(int i=0; i<4; i++)
    {
        printf("&arr[%d] = %p\n",i, &arr[i]);
    }

    printf("\nAddress of arr = %p\n", &arr);

    printf("\n");

    for(int i=0; i<4; i++)
    {
        printf("&arr[%d] = %p\n",i, (arr+i));
    }
}