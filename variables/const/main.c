#include <stdio.h>

// these two the same - read-only string
//void	func1(const char *s)
//void	func1(char const *s)
// this - read only pointer, can't assign another one to s
//void	func1(char * const s)
void	func1(char *s)
{
	printf("[func1] addr: %p, s: %s\n", s, s);
	s[1] = 'B';
	printf("[func1] addr: %p, s: %s\n", s, s);
	s = "ABC";
	printf("[func1] addr: %p, s: %s\n", s, s);
}


int		main(void)
{
	const int	i = 5;
	char		s[] = "abc";

	//i = 7;	// error
	func1(s);
	printf("[main] addr: %p, s: %s\n", s, s);
		
}
