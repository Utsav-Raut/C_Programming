#include <stdio.h>
#define MAXLINE 1000
int getline1(char s[], int lim);
int strind(char source[], char searchfor[]);
char pattern[] = "ould";
main(){
    char line[MAXLINE];
    int found = 0;

    while(getline1(line, MAXLINE) > 0){
        if(strind(line, pattern) > 0){
            printf("%s",line);
            found++;
        }
    }
    return found;
}

int getline1(char s[], int lim){
    int c, i;
    i = 0;
    // printf("Please enter a line of text \n");
    while(--lim > 0 && (c=getchar()) != EOF && c != '\n'){
        s[i++] = c;
    }
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strind(char src[], char searchfor[]){
    int i, j, k;

    for(i=0; src[i] != '\0'; i++){
        for(j=i, k=0; searchfor[k] != '\0' && src[j] == searchfor[k]; j++, k++)
            ;
        if (k > 0 && searchfor[k] == '\0')
        return i;
    }
    return -1;
}

// Sample Input:
// Hi Love! could you and I with Fate conspire
// To grasp this sorry Scheme of Things entire,
// Would not we shatter it to bits -- and then
// Re-mould it nearer to the Heart's Desire!