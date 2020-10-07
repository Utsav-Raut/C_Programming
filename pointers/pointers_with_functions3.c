/*
As the array is passed by reference we can modify the elements of the array in the called function.
It would get reflected in the calling function.
*/

#include<stdio.h>
void Double(int* A, int size){
    int i, sum = 0;
    for (i=0; i<size; i++){
        *(A+i) = 2 * *(A+i);
        // or, A[i] = 2 * A[i];
    }
}

int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A) / sizeof(A[0]);
    Double(A, size);
    for(int i=0; i<size; i++){
        printf("%d, ",*(A+i));
    }
    printf("\n");
}

/*
Note:

*/