#include <stdio.h>

main()
{
    int i, c, nwhite, nother;
    int ndigit[10];

    for(i=0; i<10; i++)
        ndigit[i] = 0;

    for(i=0; i<10; i++)
        printf("%d ", ndigit[i]);

    while((c=getchar()) != EOF)
    {
        printf("%d\t",c);
        printf("%c\t",c);
        putchar(c);
    }
    // printf("digits = ");
    // for(i=0; i<10; i++)
    // {
    //     printf(" %d",ndigit[i]);
    // }

}