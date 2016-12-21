#include <stdio.h>
int main(void) {
  int num1 = 13;
  int *memory_of_num1 = &num1;
  printf("Num1 is: %d, which is stored at %p\n", num1, &num1);
  printf("Memory_of_num1 is: %d, which is stored at %p\n", *memory_of_num1, &memory_of_num1);
  
  printf("\nAdding one to *memory_of_num1...\n\n");
  *memory_of_num1 = *memory_of_num1 + 1;
  printf("Num1 is: %d, which is stored at %p\n", num1, &num1);
  printf("Memory_of_num1 is: %d, which is stored at %p\n", *memory_of_num1, &memory_of_num1);
  
  return 0;
}
