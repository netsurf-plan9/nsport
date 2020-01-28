#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "../include/pwrite.h"

int
main()
{
	int fd;
	char str1[] = "This is a cool string to write to a file\n";
	char str2[] = "THIS IS A COOL STRING TO WRITE TO A FILE\n";

	fd = open("outfile", O_WRONLY | O_CREAT, 0644);
	if(fd == -1){
		fprintf(stderr, "Error: Cannot open file, exiting...\n");
		exit(1);
	}
	write(fd, str1, sizeof(str1));
	pwrite(fd, str2, sizeof(str2), 5);
	close(fd);
	return 0;
}

