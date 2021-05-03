#include <stdio.h>

int		f1()
{
	printf("f1 called\n");
	return (1);
}

int		f2()
{
	printf("f2 called\n");
	return (2);
}

int		f3()
{
	printf("f3 called\n");
	return (3);
}

int		f(int a, int b, int c)
{
	printf("f called, a: %d, b: %d, c: %d\n", a, b, c);
	return (1);
}

int		main(void)
{
	int	i;

	// порядок вызова функций не определён
	f(f1(), f2(), f3());
	//i = f1() + f2() + f3();
}
