#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	fprintf(stderr, "main 2 ready\n");
	sleep(5);
	fprintf(stderr, "main 2 done\n");
	return (2);
}
