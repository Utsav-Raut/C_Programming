/*Pointers are function args*/

// Call my value
/*
#include<stdio.h>
void increment(int a){
    a = a + 1;
    printf("Address of variable a in increment function = %d\n",&a);
}

main(){
    int a = 10;
    printf("Address of variable a in main = %d\n",&a);
    increment(a);
    printf("%d\n",a);
    printf("Address of variable a in main = %d\n",&a);
}

*/


// Call by reference
#include<stdio.h>
void increment(int *a){
    // *a = *a + 1;
    printf("a = %d,*a = %d\n", a, *a);
    *a = *a + 1;
}

main(){
    int a = 10;
    printf("Inside main, %d\n",&a);
    increment(&a);
    printf("%d\n",a);
}