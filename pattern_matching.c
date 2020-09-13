#include <stdio.h>
#define MAXLINE 1000
int getline1(char s[], int lim);
void main(){
    char line[MAXLINE];
    int found = 0;

    while(getline1(line, MAXLINE) > 0){
        printf("Something exists");
        printf("%s",line);
    }
}

int getline1(char s[], int lim){
    int c, i;
    i = 0;
    while(--lim > 0 && (c=getchar()) != EOF && c != '\n'){
        s[i++] = c;
    }
    printf("%s",s);
    if(c == '\n')
        s[i++] = c;
    printf("%s",s);
    s[i] = '\0';
    return i;
}