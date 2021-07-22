#include <pthread.h>
#include <stdio.h>

int				x;
pthread_mutex_t	mutex;

void	*run()
{
	int	i;

	pthread_mutex_lock(&mutex);
	i = 0;
	while (i < 100000)
	{
		x++;
		i++;
	}
	pthread_mutex_unlock(&mutex);
	return (NULL);
}

int	main()
{
	pthread_t	t1;
	pthread_t	t2;

	pthread_mutex_init(&mutex, NULL);
	pthread_create(&t1, NULL, run, NULL);
	pthread_create(&t2, NULL, run, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_mutex_destroy(&mutex);
	printf("expected x: 200000\n");
	printf("     got x: %d\n", x);
}
