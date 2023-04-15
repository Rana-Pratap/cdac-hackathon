#include <stdio.h>

typedef struct {
	char name[20];
	int roll_no;
	float marks;
}Student;

void accept(Student*);
void print(Student);

int main(int argc, char* argv[]){
	int size;
	printf("Enter the number of students ::\n");
	scanf("%d",&size);

	Student s[size];
	printf("Enter the detail of students ::\n");
	for(int i=0; i<size; i++)	
		accept(&s[i]);
	
	printf("%-10s %-10s %-10s\n","NAME","ROLL NO","MARKS");
	for(int i=0; i<size; i++)
		print(s[i]);

	return 0;
}

void accept(Student* p){
	
	// Detail Accept
//	printf("Enter the detail of students ::\n");
//	for(int i=0; i<size; i++)
//		scanf("%s %d %f",p.name, &p.roll_no, &p.marks);
		scanf("%s %d %f",p->name, &p->roll_no, &p->marks);
	//	scanf("%s %d %f",p[i].name, &p[i].roll_no, &p[i].marks);
	//	scanf("%s %d %f",p[i]->name, &p[i]->roll_no, &p[i]->marks);
}

void print(Student p){
	
	// Printing Details
	//printf("%-10s %-10s %-10s\n","NAME","ROLL NO","MARKS");
	//for(int i=0; i<size; i++)
		printf("%-10s %-10d %-10.2f\n",p.name, p.roll_no, p.marks);
		//printf("%-10s %-10d %-10.2f\n",p[i]->name, p[i]->roll_no, p[i]->marks);
	
}
