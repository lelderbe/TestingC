#include <stdio.h>

int		main(void)
{
	int a[] = {1, 3, 2, 1000};
	int i;

	i = 0;
	printf("a[] = {");
	//while (i < sizeof(a))
	while (i < 4)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("}\n");
	printf("    a[3]: %d\n", a[3]);
	printf("*(a + 3): %d\n", *(a + 3));
	printf("*(3 + a): %d\n", *(3 + a));
	printf("    3[a]: %d\n", 3[a]);
	return (0);
}
