#include <stdio.h>

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = (a += 5) + (a *= 2);
	printf("a = 1;\n");
	printf("b = (a += 5) + (a *= 2);\n");
	printf("a: %d, b: %d\n", a, b);
}
