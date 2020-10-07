/*Pointers and arrays*/
/*Array names gives us address of the the first element of the array, also called the base address*/

/*Address can be retrieved as : &A[i] or (A + i)
Values can be retrieved as : A[i] or *(A + i)*/
#include <stdio.h>

int main(){
    int A[] = {2, 4, 5, 8, 1};
    printf("%d\n",A);
    printf("%d\n",&A[0]);
    printf("%d\n",A[0]);
    printf("%d\n",*A);

    for(int i=0; i<5; i++){
        printf("Address = %d\n",&A[i]);
        printf("Address = %d\n",(A+i));
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",*(A+i));
    }
}

/* We cannot do A++; We can do p++ where p is the pointer variable, but incrementing the Array name is not allowed*/
