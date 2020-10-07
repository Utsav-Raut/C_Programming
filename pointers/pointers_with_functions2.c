/*
Following from the previous program, here we will not be passing size of the array as an argument
but instead we will compute it in the sumOfElements function itself.
*/

#include<stdio.h>
int sumOfElements(int A[]){
    int i, sum = 0;
    int size = sizeof(A) / sizeof(A[0]);
    printf("SOE - Size of A = %d, size of A[0] = %d\n",sizeof(A), sizeof(A[0]));
    for (i=0; i<size; i++){
        sum += A[i];
    }
    return sum;
}

int main(){
    int A[] = {1,2,3,4,5};
    // int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElements(A);
    printf("Sum of the elements of the array = %d\n",total);
    printf("Main - Size of A = %d, size of A[0] = %d\n",sizeof(A), sizeof(A[0]));
}

/*
Note:
THIS WILL GIVE US AN INCORRECT RESULT. HERE IS WHY...
When a compiler sees an array as function argument, it doesn not copy the whole array.
It just creates a pointer variable by the same name instead of copying the whole array.
It creates a pointer to the datatype of the array which in this case is an integer.
The compiler just copies the address of the first element of the array of the calling function, to the called function.
In the called function, the compiler converts the formal parameters "int A[]" to "int* A".
ARRAYS ARE ALWAYS PASSED AS REFERENCE PARAMETERS, AND NEVER USING CALL BY VALUE.
This makes a lot of sense instead of copying an entire array again.

so here in sumOfElements function the sizeof(A) gives us 4bytes(in my machine 8 bytes actually),because "A" is pointer to integer.
But in the main method "A" is an array and so sizeof(A) gives us 20bytes.

The method of passing an array as functions arguments(like: sumOfElements(int A[])) to tell that the parameter is an array
is actually interpreted something like; sumOfElements(int* A), by the compiler.

Thus when we pass array as function argument there is no way to know the number of elements of the array by calculating the size like we did here.
We actually need to pass the size of the array like we did in the previous example.

The variable name that is used as an array is different from the variable that is pointed to an integer.

*/