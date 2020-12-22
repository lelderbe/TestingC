// https://overcoder.net/q/24331/%D0%B2%D1%8B%D1%80%D0%B0%D0%B6%D0%B5%D0%BD%D0%B8%D1%8F-%D1%83%D0%BA%D0%B0%D0%B7%D0%B0%D1%82%D0%B5%D0%BB%D1%8F-ptr-ptr-%D0%B8-ptr
// https://en.wikipedia.org/wiki/Increment_and_decrement_operators

#include <stdio.h>
#include <stdlib.h>

void	print_arr(char *arr, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		printf("%d ", arr[i++]);
		//i++;
	}
	printf("\n");
}

void	test1(void)
{
	int		i;

	printf("-- test1 -------\n");
	i = 7;
	printf("  i: %d\n", i);
	printf("i++: %d\n", i++);
	printf("  i: %d\n", i);
}

void	test2(void)
{
	char	*p = "Hello";

	printf("-- test2 -------\n");
	printf("p: %s\n", p);
	printf("p: ");
	while(*p++)
		printf("%d ", *p);
	printf("\n");
}

void	test3(void)
{
	char	*p = "Hello";

	printf("-- test3 -------\n");
	printf("p: %s\n", p);
	printf("p: ");
	while(*p)
		printf("%d ", *p++);
	printf("\n");
}

void	test4(void)
{
	char	*arr;
	char	*ptr;
	int		i;

	printf("-- test4 -------\n");
	arr = malloc(sizeof(*arr) * 5);
	if (!arr)
		return ;
	ptr = arr;
	print_arr(ptr, 5);

	i = 0;
	while (i < 5)
	{
		printf("addr before: %p\n", arr);
		*arr++ = 1;
		printf("addr  after: %p\n", arr);
		i++;
	}
	
	print_arr(ptr, 5);
	
	free(ptr);
	ptr = 0;
}

void	test5(char *str)
{
	char	c;
	char	*ptr;

	printf("-- test5 -------\n");
	printf("   str: %s\n", str);
	ptr = str;
	c = *ptr++;
	printf("*ptr++: %c %c\n", c, *ptr);
	ptr = str;
	c = *ptr;
	ptr++;
	printf("     c: %c %c\n", c, *ptr);
}

/*
 * *s++ test
*/
void	test6(char *s)
{
	while (*s)
		printf("%c", *s++);
	printf("\n");
}

int		main(void)
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5("Hello");
	test6("Hello");

	return (0);
}
