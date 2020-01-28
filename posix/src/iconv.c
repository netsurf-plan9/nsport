#include <stdio.h>
#include <iconv.h>

iconv_t
iconv_open(char *to, char *from)
{
	fprintf(stderr,"DBG: iconv_open(%s -> %s)\n", from, to);
	return (void *) 0;
}

int
iconv(iconv_t cd, char **inbuf, size_t *inbytesleft,
		char **outbuf, size_t *outbytesleft)
{
	fprintf(stderr,"DBG: iconv()\n");
	return 0;	
}

int iconv_close(iconv_t cd)
{
	fprintf(stderr,"DBG: iconv_close()\n");
	return 0;
}

