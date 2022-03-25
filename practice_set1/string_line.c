#include<stdio.h>

int main()
{
    printf("Enter a line of text\n");
    char line_of_text[50];

    fgets(line_of_text, sizeof(line_of_text), stdin);
    printf("\nThe entered line of text is:\n");
    puts(line_of_text);

    return 0;
}