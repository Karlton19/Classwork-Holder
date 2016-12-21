#include <stdio.h>
int main(void) {
  int test[] = {10, 20, 30, 40};
  
  /*Uses the pointer to the beginning of the array to find the first memory address*/
  printf("Array begins at %p\n", test);
  
  /*Finds the size of an integer*/
  int int_size = sizeof(int);
  printf("Size of an int is %d bytes\n", int_size);
  
  /*So, where is the third value in the array going to be stored?*/
  int third_value_guess = (int)test[1] + (2 * int_size);
  printf("My guess for index 2 (the third value) is %d\n", third_value_guess);
  
  /*Where is the second value actually stored?*/
  printf("Answer is %p\n", &test[2]);
  
  return 0;
}
