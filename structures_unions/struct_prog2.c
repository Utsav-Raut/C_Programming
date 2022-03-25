/*To copy one structure variable value into another and perform memberwise
 * comparison to decide whether the two structure variables are identical or not*/

#include<stdio.h>
struct class{
	int number;
	char name[20];
	float marks;
};

int main(){
	struct class student1 = {111, "Carbon", 25};
	struct class student2 = {145, "Silicon", 34};
	struct class student3;

	student3 = student2;
	
	int x = ((student3.number == student2.number) &&
		(student3.marks == student2.marks)) ? 1 : 0;

	if(x == 1){
		printf("Student2 and student3 are same\n");
		printf("%d %s %f\n",
				student3.number,
				student3.name,
				student3.marks);
	}else{
		printf("Student2 and Student3 are not same\n");
	}
	return 0;
}
