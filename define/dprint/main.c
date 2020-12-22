#include <stdio.h>
#define dprint(expr)		printf(#expr " = %g\n", expr)
#define paste(front, back)	front ## back

int		main(void)
{
	double	x;
	double	y;
	int		val1;

	x = 15;
	y = 3;
	dprint(x/y);
	paste(val, 1) = 7;
	printf("%d\n", paste(val, 1));
}
