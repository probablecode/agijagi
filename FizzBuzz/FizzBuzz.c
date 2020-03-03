#include <stdio.h>
int main(void)
{
	for (int i = 1; i < 101; i++) {

		if (!(i % 3))
			printf("Fizz");
		if (!(i % 5))
		printf("Buzz");
		else if ((i % 3) && (i % 5))
			printf("%d",i);
		printf("\n");
	}
	return 0;
}
