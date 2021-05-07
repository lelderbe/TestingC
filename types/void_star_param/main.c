#include <stdio.h>

void	ft_memset(void *s, int c, size_t n)
{
	while (n)
	{
		*(unsigned char *)s = (unsigned char)c;
		//(unsigned char*)s++;
		s++;	// really??
		n--;
	}
}

int		main(void)
{
	int		i;
	char	buf[] = "aaaaa";
	int		buf2[] = {1, 2, 3, 4, 5};
	char	*s;

	printf("%s\n", buf);
	// auto (char *) --> (void *)
	ft_memset(buf, 'b', 5);
	printf("%s\n", buf);

	i = 0;
	s = (char*)buf2;
	while (i < (int)sizeof(buf2))
	{
		printf("%c ", s[i] + '0');
		i++;
	}
	printf("\n");

	// auto (int *) --> (void *)
	ft_memset(buf2, 1, sizeof(buf2));
	
	i = 0;
	s = (char*)buf2;
	while (i < (int)sizeof(buf2))
	{
		printf("%c ", s[i] + '0');
		i++;
	}
	printf("\n");
}
