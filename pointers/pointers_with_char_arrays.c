/*
1. How to store strings:
The character array should be large enough that is its size must be >= no of characters in the string + 1
The extra 1 in the end is for storing the string termination character.
The string termination is the null character (\0) which has the ASCII value of 0.
All functions in C for string manipulation expects that strings will be null terminated. 
*/

// #include<stdio.h>
// #include<string.h>
// int main(){
//     printf("Inside main\n");
//     char c[5];
//     c[0] = 'J';
//     c[1] = 'O';
//     c[2] = 'H';
//     c[3] = 'N';
//     c[4] = '\0';
//     printf("%s\n",c);

//     // Bigger array will also terminate at null character
//     char big_array[55];
//     big_array[0] = 'B';
//     big_array[1] = 'U';
//     big_array[2] = 'B';
//     big_array[3] = 'L';
//     big_array[4] = '\0';
//     int len = strlen(big_array);
//     printf("%s\n",big_array); 
//     printf("Length of the string = %d\n",len);
//     // strlen also counts until it sees the null character

//     // using string literals, which are group of characters within double quotes
//     char name[20] = "Humungosaur";
//     int name_len = strlen(name);
//     printf("Length of the name = %d\n",name_len);
//     // Null termination for string literal is implicit.
//     /*
//     We cannot initialize a string literal as below:
//     char name[20];
//     name = "John"
//     This is wrong.
//     */

//    //For string literal we can remove the array size
//     char new_name[] = "Gloop";
//     int new_name_len = strlen(new_name);
//     printf("Length of the new_name = %d\n",new_name_len);
//     printf("Size of the new_name in bytes = %d\n",sizeof(new_name)); // This is 6 bytes because of one extra character, null character.


//     // Another way to initialize
//     char c1[5] = {'J', 'O', 'H', 'N', '\0'};
//     int len1 = strlen(c1);
//     printf("Length of the c = %d\n",len1);
//     printf("Size of c in bytes = %d\n",sizeof(c1)); // This is 6 bytes because of one extra character, null character.  

// }


/*Arrays and pointers are different types that are used in similar manner*/
// #include<stdio.h>
// int main(){
//     char c1[6] = "Hello";
//     char *c2;
//     c2 = c1; // c1 being an array, its name gives the base address
//     printf("Address of c1 = %d\n",c1);
//     printf("Address of c1 = %d\n",&c1);
//     printf("Address contained in c2 = %d\n",c2);
//     printf("%s\n",c2);
//     printf("%c\n",c2[0]);
//     printf("%c\n",c2[1]);

//     for(int i=0; i<6; i++){
//         printf("%d\n",(c2 + i));
//         printf("%c\n",*(c2 + i));
//     }

//     for(int i=0; i<6; i++){
//         printf("%d\n",&c2[i]);
//         printf("%c\n",c2[i]);
//     }
// }


/*Arrays are always passed to functions by reference.
Whenever we pass an array to a function we only pass the base address of the array to the function.*/

#include<stdio.h>
void print(char *c){
    int i = 0;
    while(c[i] != '\0'){
        printf("%c",c[i]);
        i++;
    }
    printf("\n");

    //OR
    i= 0;
    while(*(c+i) != '\0'){
        printf("%c",c[i]);
        i++;
    }
    printf("\n");

    //OR
    while(*c != '\0'){
        printf("%c",*c);
        c++;
    }
    printf("\n");

}
int main(){
    char c[20] = "Hello";
    print(c);
}