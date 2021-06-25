#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	fprintf(stderr, "main 3 ready\n");
	sleep(3);
	fprintf(stderr, "main 3 done\n");
	return (3);
}
