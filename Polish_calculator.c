#include <stdio.h>
#include <ctype.h>
#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);
double atof(char []);
main(){
    int type;
    double op2;
    char s[MAXOP];

    while((type == getop(s)) != EOF){
        switch(type){
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if(op2 != 0)
                    push(pop() / op2);
                else
                    printf("error : division by zero \n");
            case '\n':
                printf("\t%.8g\n",pop());
            default:
                printf("Error: unknown input %s\n",s);
                break;
        }
    }
    return 0;
}

double atof(char s[]){
    int sign, i;
    double val, power;

    for(i=0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        i++;
    for(val = 0.0; isdigit(s[i]); i++){
        val = val * 10.0 + (s[i] - '0');
    }
    if(s[i] == '.')
        i++;
    for(power = 1.0; isdigit(s[i]); i++){
        val = val * 10.0 + (s[i] - '0');
        power *= 10.0;
    }

    return sign * val / power;
}

#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

void push(double f){
    if(sp < MAXVAL)
        val[sp++] = f;
    else
    {
        printf("Error : Stack is full, cannnot push %g\n",f);
    }
    
}

double pop(void){
    if(sp != 0){
        return val[--sp];
    }
    else
    {
        printf("Error : stack is empty\n");
        return 0.0;
    }
    
}

int getch(void);
void ungetch(int);
int getop(char s[]){
    int c, i;
    while((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    printf("s = %c",s);
    if(!isdigit(c) && c != '.')
        return c;

    i = 0;
    if(isdigit(c))
        while(isdigit(s[++i] = c = getch()))
            ;
    if(c == '.')
        while(isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if(c != EOF)
        ungetch(c);
    return NUMBER;
}

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int getch(void){
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){
    if(bufp > BUFSIZE){
        printf("ungetch :  too many characters \n");
    }
    else
    {
        buf[++bufp] = c;
    }
    
}