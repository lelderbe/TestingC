#include <stdio.h>

enum enum_type {AAA, BBB, CCC};

typedef struct {
	char *name;
	enum enum_type type;
}			t_elem;

void	print1(t_elem e)
{
	printf("Hi, %s!\n", e.name);
	printf("This is function: %s\n", __FUNCTION__);
}

void	print2(t_elem e)
{
	printf("Hi, %s!\n", e.name);
	printf("Another text for function: %s\n", __FUNCTION__);
}

void	print3(t_elem e)
{
	printf("Hi, %s!\n", e.name);
	printf("Some different text from function: %s\n", __FUNCTION__);
}

//void (*func[])(t_elem) = {print1, print2, print3};

int		main(void)
{
	int		i;
	t_elem	elements[] = {{"Mike", AAA}, {"Mary", CCC}, {"Bob", BBB}};
	void	(*func[])(t_elem) = {print1, print2, print3};

	i = 0;
	while (i < 3)
	{
		func[elements[i].type](elements[i]);
		i++;
	}
}
