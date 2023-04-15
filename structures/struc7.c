#include <stdio.h>

typedef struct {
	char name[20];
	int roll_no;
	float marks;
}Student;

int main(int argc, char* argv[]){
	
	Student s[5];

	// Detail Accept
	printf("Enter the detail of students ::\n");
	for(int i=0; i<5; i++)
		scanf("%s %d %f",s[i].name, &s[i].roll_no, &s[i].marks);
	
	// Printing Details
	printf("%-10s %-10s %-10s\n","NAME","ROLL NO","MARKS");
	for(int i=0; i<5; i++)
		printf("%-10s %-10d %-10.2f\n",s[i].name, s[i].roll_no, s[i].marks);
	

	return 0;
}
