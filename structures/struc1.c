// Making hardcoded structure


#include<stdio.h>
#include<string.h>

struct Student{
	int roll_no;
	char name[20];
	float marks;
};

int main(void){
	struct Student s1;

	s1.roll_no = 1;
	strcpy(s1.name,"Rana");
	s1.marks = 65;

	printf("\nStudent Info :: %-5d\t%-10s\t%-5.2f%%\n",s1.roll_no,s1.name,s1.marks);

	return 0;
}
