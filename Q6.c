#include <stdio.h>

int main(int argc, char argv[]) {
	int A, B, C, max, min, avg;

  	printf("Enter 3 numbers: ");
  	scanf("%d %d %d", &A, &B, &C);

 
  	max = A;
  	min = A;

  	for (int i = 0; i < 3; i++) {
    	if (A > max) {
      		max = A;
    	}
    	if (A < min) {
      		min = A;
    	}

    	if (B > max) {
      		max = B;
    	}
    	if (B < min) {
      		min = B;
    	}

    	if (C > max) {
      		max = C;
    	}
    	if (C < min) {
      		min = C;
    	}
  	}

  
  	avg = (A + B + C) / 3;

	printf("max is %d\n", max);
  	printf("min is %d\n", min);
  	printf("avg is %d\n", avg);

  return 0;
}

