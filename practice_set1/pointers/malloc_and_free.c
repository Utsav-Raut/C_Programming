#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, num_of_elements, sum = 0;

    printf("Please enter the number of elements in the array:\n");
    scanf("%d",&num_of_elements);

    ptr = (int*)malloc(num_of_elements * sizeof(int));

    int arr[*ptr];
}