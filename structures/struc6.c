#include <stdio.h>

typedef struct {
	char name[10];
	float price;
	int pages;
}book;

int main(int argc, char* argv[]){
	
	book b1;
	printf("Enter the detail of books :: \n");
	scanf("%s %f %d", b1.name, &b1.price, &b1.pages);
	printf("The details of tha book is :: \n");
	printf("%s %.2f %d\n", b1.name, b1.price, b1.pages);

	return 0;
}
