#include<stdio.h>

struct personal{
	char name[20];
	int day;
	char month[10];
	int year;
	float salary;
};

int main(){
	struct personal person;
	printf("INPUT THE VALUES\n");
	scanf("%s %d %s %d %f", 
			person.name,
			&person.day,
			person.month,
			&person.year,
			&person.salary);
	printf("Displaying the values\n");
	printf("%s %d %s %d %f\n",
			person.name,
			person.day,
			person.month,
			person.year,
			person.salary);
	return 0;
}
