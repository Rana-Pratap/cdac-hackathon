#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int roll_no;
	char name[20];
	float marks;
}Student;

int main(int argc, char  *argv[]){
	
	int size = atoi(argv[1]);

	Student *ptr = (Student *)malloc(size * sizeof(Student));
	
	printf("\nEnter Roll no , Name, Marks :: ");
	for(int i=0; i<size; i++)
		scanf("%d %s %f", &ptr[i].roll_no, ptr[i].name, &ptr[i].marks);

	for(int i=0; i<size; i++)
		printf("\n%-10d %-10s %-10.2f\n", ptr[i].roll_no,ptr[i].name, ptr[i].marks);
	
	free(ptr);

	return 0;
}
