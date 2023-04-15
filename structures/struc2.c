// Making structure using function


#include<stdio.h>
#include<string.h>

typedef struct Student{
	int roll_no;
	char name[20];
	float marks;
}stud_t;

void accept_stud(stud_t*);
void print_stud(stud_t*);

int main(void){
	struct Student s1;
	
	accept_stud(&s1);
	print_stud(&s1);

	return 0;
}

void accept_stud(stud_t *s){
	
	s->roll_no = 1;
	strcpy(s->name,"Rana");
	s->marks = 65;

}

void print_stud(stud_t *s){
	
	printf("\nStudent Info :: %-5d\t%-10s\t%-5.2f%%\n",s->roll_no,s->name,s->marks);
}
