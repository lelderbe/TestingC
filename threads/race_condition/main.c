#include <pthread.h>
#include <stdio.h>

int	x;

void	*run()
{
	int	i;

	i = 0;
	while (i < 100000)
	{
		x++;
		i++;
	}
	return (NULL);
}

int	main()
{
	pthread_t	t1;
	pthread_t	t2;

	pthread_create(&t1, NULL, run, NULL);
	pthread_create(&t2, NULL, run, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	printf("expected x: 200000\n");
	printf("     got x: %d\n", x);
}
