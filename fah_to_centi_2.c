#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main(){

    float fahr, celcius;

    for(fahr = LOWER; fahr <= UPPER; fahr+=STEP){
        celcius = (5.0/9.0)*(fahr - 32.0);
        printf("%3.0f %6.1f\n",fahr, celcius);
    }
}