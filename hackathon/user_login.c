#include<stdio.h>

void signIn(void);
void signUp(void);

typedef struct{
	char fname[30];
	char lname[30];
	char mobile[10];
	char email[30];
	char password[30];
}details;

int main(void){
	int ch;
	do{
		printf("\n0. Exit\n1. Sign In\n2. Sign Up\n");	
		printf("Enter your choice : ");
		scanf("%d", &ch);

		switch(ch){
			case 0: //exit
				return 0;

			case 1: // sign in
				signIn();
				break;

			case 2: // sign out
				signUp();
				break;

			default: // enter valid choice
				break;
		}	

	}while(ch!=0);
		return 0;
}

void signIn(void){
	printf("You are in Sign In");
}

void signUp(void){
	details d;
//	printf("You are in Sign Up");
	// Enter your details
	printf("\nEnter First Name : ");
	scanf("%*c%[^\n]s", d.fname);		// add a functinality if name has two word
	printf("Enter Last Name : ");
	scanf("%s", d.lname);
	printf("Enter Mobile : ");
	scanf("%s", d.mobile);
	printf("Enter Email : ");
	scanf("%s", d.password);
	
	printf("**Thank You! Your details saved Successfully***\n\n");
	//scanf("");
	// printing details
//	printf("\n%s %s\n%s\n%s\n",d.fname, d.lname, d.mobile, d.password);
}
