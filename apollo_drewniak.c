
#include <stdio.h>

int main(void) {

int i;

for (i = 10; i >= 0; --i) {
	if(i == 7) {

		printf("Main Engines Start");
		continue;
	}

	if(i == 0) {
		printf("Liftoff");
		

	}

		printf("%d", i);

}


	return 0;
}
