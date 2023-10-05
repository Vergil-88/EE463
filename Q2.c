#include <stdio.h>


int main(int argc, char argv[]){
	char *Gmonths[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	char *Hmonths[] = {"Muharram", "Safar", "Rabi 1", "Rabi 2", "jamad 1", "Jamad 2", "Rajab", "Shabaan", "Ramadan", "Shawal", "Du Alhijah", "Du Alqi'dah"}; 
	for (int i = 0; i < 12; i++) {
		printf("%d - %s,\t%s\n", i+1, Gmonths[i], Hmonths[i]);
	}

  return 0;
}
