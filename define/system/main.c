#if SYSTEM == SYSV
# define HDR "sysv.h"
#elif SYSTEM == BSD
# define HDR "bsd.h"
#elif SYSTEM == MSDOS
# define HDR "msdos.h"
#else
# define HDR "default.h"
#endif

//#include HDR
#include <stdio.h>

int		main(void)
{
	printf(HDR);
	printf("\n");
	//printf(SYSTEM);
	//printf("\n");
}
