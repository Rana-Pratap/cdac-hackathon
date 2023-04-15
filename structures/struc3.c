#include<stdio.h>

typedef struct Employee{
	int empid;
	char name[20];
	char address[20];
	double salary;

	struct DOB{
		int dd;
		int mm;
		int yy;
	}dob;
}emp_t;

void accept(emp_t *);
void print(emp_t *);

int main(void){
	emp_t e1;

	accept(&e1);
	print(&e1);

	return 0;
}

void accept(emp_t *e){
	printf("\nEnter the details of Employee :: ID NAME ADDRESS SALARY\n-->");
	// Accepting detail of employee
	scanf("%d %s %s %lf",&e->empid,e->name,e->address,&e->salary);
	printf("Enter DOB ::  DD MM YY\n-->");
	// Accepting dob of employee
	scanf("%d %d %d",&e->dob.dd,&e->dob.mm,&e->dob.yy);
}
void print(emp_t *e){
	printf("\nDetails of the Employer is  :: \n");
	printf("%-5d %-10s %-10s %-10.2lf ",e->empid,e->name,e->address,e->salary);
	printf("%-1d/%-1d/%-1d\n", e->dob.dd,e->dob.mm,e->dob.yy);
}
