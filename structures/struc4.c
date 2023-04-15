#include<stdio.h>

typedef struct Date{
	unsigned int dd:5;
	unsigned int mm:4;
	unsigned int yy:11;
}date_t;

void print(date_t *);
int accept();

int main(void){
	date_t d;

	printf("Enter date :: dd/mm/yyyy :: ");
	
	d.dd = accept();
	d.mm = accept();
	d.yy = accept();

//	printf("d.dd-%d\n",d.dd);
//	printf("d.mm-%d\n",d.mm);
//	printf("d.yy-%d\n",d.yy);
	print(&d);

	return 0;
}

int accept(){
	int temp;
	scanf("%d",&temp);
	return temp;
}

void print(date_t *d){
	printf("Date :: %d/%d/%d", d->dd, d->mm, d->yy);
}
