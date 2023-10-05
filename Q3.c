#include <stdio.h>

int main() {
  	char fullName[50];
  	int age;
  	char address[100];

  	printf("Enter your full name: ");
  	scanf("%s\n", &fullName);
	
	
  	printf("Enter your age: ");
  	scanf("%d\n", &age);
	
	getchar();


  	printf("Enter your address: ");
  	scanf("%s\n", &address);

  	printf("Full name %s\n", fullName);
  	printf("Age %d\n", age);
  	printf("Address %s", address);

  	return 0;
}
