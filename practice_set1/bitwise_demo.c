/*
 * & - Bitwise AND
 * | - Bitwise OR
 * ^ - Bitwise Exclusive OR
 * ~ - Bitwise Complement
 * << - Shift left
 * >> - Shift right
 * */


#include<stdio.h>
int main()
{
	int a = 12, b = 25;
	printf("Bitwise AND gives output as = %d\n",a&b);

	printf("Bitwise OR gives output as = %d\n",a|b);

	printf("Bitwise exclusive OR gives output as = %d\n",a^b);

	printf("Bitwise Complement of 35 is = %d\n",~35);

	printf("Right-shift operator on 212 follows:\n");
	int num = 212;
	for(int i=0; i<=2; i++)
		printf("Right shift by %d: %d\n",i,num>>i);

	printf("\n");

	for(int i=0; i<=2; i++)
		printf("Left shift by %d: %d\n",i,num<<i);

	return 0;
}

