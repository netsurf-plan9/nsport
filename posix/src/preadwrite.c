/* 
 * see pwrite.h for documentation.
 */

#include <stdio.h>
#include <unistd.h>

ssize_t pwrite(int fd, const void *buf, size_t count, off_t offset)
{
	
	off_t orig;
	int s;

	orig = lseek(fd, 0, SEEK_CUR); 		/* Save current offset */
	lseek(fd, offset, SEEK_SET);
	s = write(fd, buf, count);
	lseek(fd, orig, SEEK_SET);		/* Restore original file offset */
	return s;
}

ssize_t pread(int fd, const void *buf, size_t count, off_t offset)
{
	
	off_t orig;
	int s;

	orig = lseek(fd, 0, SEEK_CUR); 		/* Save current offset */
	lseek(fd, offset, SEEK_SET);
	s = read(fd, buf, count);
	lseek(fd, orig, SEEK_SET);		/* Restore original file offset */
	return s;
}
