#include <stdio.h>

int		main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		printf("\n");
		i++;
	}
	return (0);
}
