#include <stdio.h>

int main(int argc, char argv[]){
	char *Gmonths[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        char *Hmonths[] = {"Muharram", "Safar", "Rabi 1", "Rabi 2", "jamad 1", "Jamad 2", "Rajab", "Shabaan", "Ramadan", "Shawal", "Du Alhijah", "Du Alqi'dah"}; 
	int i;
	
	printf("Enter index number: ");
	scanf("%d", &i);
	

	if (i > 0 && i <= 12) {
  		printf("The month you picked is --> %s ||| %s\n", Gmonths[i], Hmonths[i] );
	} else {
  		printf("Invalid index number.\n");
	}

	return 0;

}
