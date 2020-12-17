#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	const char	*str1 = "12345";
	char const	*str2 = "ABCDE";
	//char * const str3 = "abcde";
	char * const str3 = malloc(sizeof(*str3) * 6);

	str3[0] = 'a', str3[1] = 'b', str3[2] = 'c', str3[3] = 'd', str3[4] = 'e';

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);

	printf(" increment pointers \n");
	str1++;
	str2++;
	//str3++;	//error increment read-only pointer

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);

	printf(" change [0] elementh \n");
	//str1[0] = '#';	//error changing read-only string
	//str2[0] = '#';	//error changing read-only string
	*str3 = '#';

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
}
