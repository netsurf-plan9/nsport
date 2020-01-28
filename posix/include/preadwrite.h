/* 
 * pwrite() and pread() are not available through APE
 * and I cannot get the one supplied with gnulib to work.
 * So this is my implmentatin, wrapping write() and
 * read() in APE.
 *
 * Note that in Plan 9 libc, write() would call pwrite()
 * internally, but I don't want to mix APE with libc.
 */
#include <sys/types.h>

ssize_t pwrite(int fd, const void *buf, size_t count, off_t offset);
ssize_t pread(int fd, void *buf, size_t count, off_t offset);
