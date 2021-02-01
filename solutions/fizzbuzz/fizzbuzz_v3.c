#include <stdio.h>

#define LIMIT 100

int		main(void)
{
	int		i;

	i = 1;
	while (i <= LIMIT)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf("\n");
		i++;
	}
	return (0);
}
