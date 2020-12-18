#include <stdio.h>

void	my_function(void)
{
	printf("%s\n", __func__);
}

int		main(void)
{
	my_function();
	printf("%s\n", __func__);
	return (0);
}
