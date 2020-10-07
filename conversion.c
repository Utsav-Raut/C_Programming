#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000
main(){

    double sum, atof1(char []);
    char line[MAXLINE];
    int getline1(char line[], int max);

    sum = 0;
    while(getline1(line, MAXLINE) > 0){
        printf("\t%g\n", sum += atof1(line));
    }
    return 0;
}

int getline1(char line[], int max){
    int c, i;

    i = 0;
    while(--max > 0 && (c = getchar()) != EOF && c != '\n'){
        line[i++] = c;
    }
    if(c == '\n')
        line[i++] = c;
    
    line[i] = '\0';
    return i;
}

double atof1(char s[]){

    double val, power;
    int sign, i;

    for(i=0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;

    if(s[i] == '+' || s[i] == '-')
        i++;
    for(val = 0.0; isdigit(s[i]); i++){
        val = 10.0 * val + (s[i] - '0');
        printf("%f\n",val);
    }
    if(s[i] == '.')
        i++;
    for(power = 1.0; isdigit(s[i]); i++){
        val = 10.0 * val + (s[i] - '0');
        printf("%f\n",val);
        power *= 10.0;
        printf("%f\n",power);
    }
    return sign * val / power;

}