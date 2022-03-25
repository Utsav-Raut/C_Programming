#include<stdio.h>

int main()
{
    printf("Enter the length of the array:\n");
    int len_of_arr;
    scanf("%d",&len_of_arr);

    printf("Enter the array elements:\n");
    int arr[len_of_arr];
    for(int i = 0; i < len_of_arr; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element that you are looking for:\n");
    int ele;
    scanf("%d",&ele);

    int index = 0;

    for(int i=0; i<len_of_arr; i++){
        if(arr[i] == ele){
            index = i;
        }
    }
    if(index != 0)
        printf("The required element is found at array index:%d\n",index);
    else
        printf("The element does not exist\n");
}