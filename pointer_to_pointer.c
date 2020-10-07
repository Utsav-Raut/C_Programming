#include <stdio.h>
#include <string.h>
#define MAXLINES 5000

char *lineptr[MAXLINES];
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int start, int end);

main(){
    int nlines;
    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        // qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        printf("Hello World\n");
        return 0;
    }
    else{
        printf("error: input too big to sort\n");
        return 1;
    }
}

#define MAXLEN 1000
int getline1(char *, int);
char *alloc(int);
int readlines(char *lineptr[], int maxlines){
    int len, nline;
    char *p, line[MAXLEN];
    nline = 0;
    printf("Enter a line\n");
    while((len = getline1(line, MAXLEN)) > 1)
        if(nline >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else{
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nline++] = p;
        }
    return nline;
}

#define ALLOCSIZE 10000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
char *alloc(int len){   /*return a pointer to n characters*/
    if(allocbuf + ALLOCSIZE - allocp >= len){
        allocp += len;
        return allocp - len;
    }
    else{
        return NULL;
    }
}

int getline1(char *s, int lim){
    int i, c;

    for(i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

void writelines(char *lineptr[], int maxlines){
    while(maxlines-- > 0)
        printf("%s\n",*lineptr++);
}

