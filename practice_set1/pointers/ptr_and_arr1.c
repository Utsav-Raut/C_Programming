#include<stdio.h>

int main()
{
    int arr[6], sum = 0;

    printf("Enter the array elements and then find their sum:\n");

    for(int i=0; i<6; i++)
    {
        scanf("%d",(arr+i)); //Equiv to scanf("%d",&arr[i]);

        sum += *(arr + i);  //Equiv to sum += arr[i];
    }

    printf("Sum = %d\n",sum);
    return 0;
}