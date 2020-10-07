#include<stdio.h>
int sumOfElements(int A[], int size){
    int i, sum;

    for (i=0; i<size; i++){
        sum += A[i]; // A[i] is *(A+i)
    }
    return sum;
}

int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElements(A, size); // A can be used for &A[0]
    printf("Sum of the elements of the array = %d\n",total);
}

/*
Note:
The sizeof() function gives us the size of array in bytes, which in this case of 20.(each element = 4 bytes.. 5 elements = 20bytes)
We divide the sizeof() function with the size of an individual element to get the number of elements in the array.
thus 20/4 = 5
*/