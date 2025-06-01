#include <stdio.h>

struct Student {
  char* name;
  int age;
  int total_marks;
};

typedef struct Student Student;

int main(void) {
  printf("Student 1:\nName: ");
  char name_1[30];
  scanf("%s", name_1);
  printf("Age: ");
  int age_1;
  scanf("%d", &age_1);
  printf("Total marks: ");  
  int total_marks_1;
  scanf("%d", &total_marks_1);
  Student student_1 = { name_1, age_1, total_marks_1 };

  printf("Student 2:\nName: ");
  char name_2[30];
  scanf("%s", name_2);
  printf("Age: ");
  int age_2;
  scanf("%d", &age_2);
  printf("Total marks: ");    
  int total_marks_2;
  scanf("%d", &total_marks_2);
  Student student_2 = { name_2, age_2, total_marks_2 };

  puts("\n");
  printf("Student 1: %s, age %d, total marks %d\n", student_1.name, student_1.age, student_1.total_marks);
  printf("Student 2: %s, age %d, total marks %d\n", student_2.name, student_2.age, student_2.total_marks);
}
