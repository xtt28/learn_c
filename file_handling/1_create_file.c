#include <stdio.h>

int main(void) {
  FILE* fptr = fopen("test.txt", "w");
  fprintf(fptr, "This is the content of the file test.txt.");
  fclose(fptr);
  puts("File created successfully.");
}
