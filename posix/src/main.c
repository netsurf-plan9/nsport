#include <stdio.h>
//#include <stdlib.h>
#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
#include <math.h>
#include "../include/math9.h"


#include "../include/preadwrite.h"

int
main()
{
	float f;

	f = 8.59;
	char str[] = "Hello this is my string\n";
	write(1, str, sizeof(str));
	pwrite(1, str, sizeof(str), 7);

	printf(" ceil(f) == %f\n", ceil(f));

	return 0;
}
