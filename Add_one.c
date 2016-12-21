#include <stdio.h>
void addone(int num);
int main(void) {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("num's address is %p\n", &num);
  printf("num's value is %d\n", num);
  addone(num);
  printf("num's value is now %d\n", num);
  return 0;
}

/**
*Adds one to a number
*Input: One integer, num
*Output: None
**/
void addone(int num) {
  printf("\n*** Entering addone()\n");
  printf("this num is at %p\n", &num);
  printf("this num's value was %d\n", num);
  num++;
  printf("this num's value is now %d\n", num);
  printf("*** Done with addone()\n\n");
}
