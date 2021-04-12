#include <stdio.h>

#define LIMIT 100

int		main(void)
{
	int		i;

	i = 1;
	while (i <= LIMIT)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 && i % 5)
			printf("%d", i);
		printf("\n");
		i++;
	}
	return (0);
}
