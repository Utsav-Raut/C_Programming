/*Pointers to Pointers*/
/*Pointers usually takes up 4 bytes of memory*/

#include<stdio.h>
main(){
    int x = 5;
    int* p = &x;
    *p = 6;
    int **q = &p;
    int*** r = &q;

    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",*(*q));

    printf("%d\n",*(*r));
    printf("%d\n",*(*(*r)));

    ***r = 10;
    printf("x=%d\n",x);
    **q = *p + 2;
    printf("x=%d\n",x);

}