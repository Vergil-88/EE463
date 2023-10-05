#include <stdio.h>

struct student {
  char name[50];
  int grade;
};

int main() {
  struct student students[10];

  // Get student information from the user.
  for (int i = 0; i < 10; i++) {
    printf("Enter student %d's name: ", i + 1);
    scanf("%s", students[i].name);
    printf("Enter student %d's grade: ", i + 1);
    scanf("%d", &students[i].grade);
  }

  // Print student grades.
  printf("\nStudent grades:\n");
  for (int i = 0; i < 10; i++) {
    printf("%s: %d\n", students[i].name, students[i].grade);
  }

  return 0;
}
