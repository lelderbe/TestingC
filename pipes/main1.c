#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	fprintf(stderr, "main 1 ready\n");
	sleep(1);
	fprintf(stderr, "main 1 done\n");
	return (1);
}
