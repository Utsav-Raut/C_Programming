/*mycodeschool youtube channel, pointers in C/C++ playlist. Video 3*/
/*THE ONLY POINTER ARITHMETIC THAT IS ALLOWED IS ADDING OR SUBTRACTING SOME CONSTANT INTEGER VALUE TO THE POINTER*/
#include<stdio.h>
main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of integer is = %li bytes.\n",sizeof(int));
    printf("Address = %d, value = %d.\n",p, *p);
    printf("Address = %d, value = %d.\n",p+1, *(p+1)); 
    
    char *p0;
    // p0 = p;  This is not allowed as we are allocating an integer pointer to a character pointer
    p0 = (char*)p;  /*This will typecase p to character pointer*/
    printf("Size of char is = %li bytes.\n",sizeof(char));
    printf("Address = %d, value = %d.\n",p0, *p0); 
    printf("Address = %d, value = %d.\n",p0+1, *(p0+1)); 

    /*Void Pointer - Generic Pointer*/
    void *p1;
    p1 = p; /*We do not need an explicit type casting here as the pointer p1 is a generic pointer and can be assigned to any pointer.*/
    /*We cannot dereference a void pointer variable (e.g. *p1) as it is not mapped to any particular data type.*/
    printf("Address = %d\n",p1);
}