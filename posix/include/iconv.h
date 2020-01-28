/* quite dummy iconv() implementation */

#ifndef ICONV_H
#define ICONV_H

/* ape/errno.h does lack a EILSEQ error code
 * but this hack is not very nice, but I don't
 * have to change the source of utf8.c by doing
 * like this.
 */
#define EILSEQ 75

typedef void *iconv_t;

iconv_t iconv_open(char *to, char *from);

int iconv(iconv_t cd, char **inbuf, size_t *inbytesleft,
		char **outbuf, size_t *outbytesleft);

int iconv_close(iconv_t cd);

#endif /* ICONV_H */
