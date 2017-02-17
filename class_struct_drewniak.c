#include <stdio.h>
#include <string.h>
struct student {
	char name[20];
	char class[20];
	int grade1;
	int grade2;
	int grade3;
};
int main(void) {
	struct student Karlton;
	strcpy(Karlton.name, "Karlton");
	strcpy(Karlton.class,  "Senior");

	return 0;
}
