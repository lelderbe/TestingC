#include <stdio.h>

#define LIMIT 100

int		main(void)
{
	int		i;

	i = 1;
	while (i <= LIMIT)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz\n");
			else
				printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
		//printf("\n");
		i++;
	}
	return (0);
}