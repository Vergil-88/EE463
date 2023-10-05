#include <stdio.h>

int main(int argc, char *argv[]) {
  	char fullName[50];
  	int age;
  	char address[100];

  	printf("Enter your full name: \n");
  	scanf("%[^\n]s", &fullName);
	
	
  	printf("Enter your age: \n");
  	scanf("%d", &age);
	
	getchar();


  	printf("Enter your address: \n");
  	scanf("%[^\n]s", &address);

  	printf("Full name %s\n", fullName);
  	printf("Age %d\n", age);
  	printf("Address %s\n", address);

  	return 0;
}

