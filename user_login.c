#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define USER_FILE "user.db"

void signIn(void);
void signUp(void);

typedef struct{
	int id;
	char fname[30];
	char lname[30];
	char mobile[11];
	char email[30];
	char password[30];
}details;

void readBinary(void){
	details s;
	FILE* fp = fopen(USER_FILE,"rb");
	if(fp==NULL){
		perror("\nFailed to open User File.\n");
		exit(1);
	}
	while(fread(&s, sizeof(details), 1, fp)>0)
		printf("\n%s %s\n%s\n%s\n%s\n",s.fname,s.lname,s.mobile,s.email,s.password);
		fclose(fp);
}

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
			case 303:
				readBinary();
				break;

			default: // enter valid choice
				printf("\nEnter valid choice.\n");
				break;
		}	

	}while(ch!=0);
		return 0;
}

void signIn(void){
	char email[30], pword[30];
	printf("\n***You are in Sign In***\n");
	printf("Enter Email : ");
	scanf("%s", email);
	printf("Enter Password : ");
	scanf("%s", pword);

	printf("Email :: %s\nPassword :: %s\n",email,pword);
//	strcmp(email,) && strcmp(pword)
	
		int ch1;
		printf("\n0.Sign Out\n1.All Quotes\n2.My Quotes\n3.My Favorite Quotes\n4.Like/Unlike Quotes\n5.New Quote\n6.New Quote\n7.Delete Quote\n8.Change Password\n9.New Profile\n");
		printf("\nEnter Choice=");
		scanf("%d",&ch1);
		do{
			switch(ch1)
				{
					case 0:printf("\nSign out");
						   break;
					case 1:printf("\nAll Quotes");
						   break;
					case 2:printf("\nMy Quotes");
					       break;
					case 3:printf("\nMy Favorite Quote");
					       break;
					case 4:printf("\nLike/Unlike Quote");
				    	   break;
					case 5:printf("\nNew Quote");
					       break;
					case 6:printf("\nEdit Quote");
					       break;
					case 7:printf("\nDelete Quote");
					       break;
					case 8:printf("\nChange Password");
					       break;
					case 9:printf("\nEdit Profile");
					       break;
					default:printf("\nInvalid Choice");
					       break;
			}
	}while(ch1!=0);
}

void signUp(void){
	details d;
	//unique id 
//	d.id = 
	printf("\nEnter First Name : ");
	scanf("%*c%[^\n]s", d.fname);		// add a functinality if name has two word
	printf("Enter Last Name : ");
	scanf("%s", d.lname);
	printf("Enter Mobile : ");
	scanf("%s", d.mobile);
	printf("Enter Email : ");
	scanf("%s", d.email);
	printf("Enter Password : ");
	scanf("%s", d.password);
	
	// file write functionality
	FILE  *fp = fopen(USER_FILE, "ab");
	if(fp == NULL){
		perror("\n**Failed to open user file**\n");
		exit(1);
	}
//	printf("name : %s %s\nmobile: %s\nemail: %s\n",d.fname,d.lname,d.mobile,d.email);
	fwrite(&d, sizeof(details), 1, fp);
	fclose(fp);

	printf("**Thank You! Your details saved Successfully***\n\n");
}
