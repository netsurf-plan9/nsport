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
	int len = 0;		/* number bytes (excluding '\0') */
	char *inp, *outp;	/* these pointers are updated */

	if(inbuf == NULL || outbuf == NULL)
		return 0;

	fprintf(stderr, "[DBG] iconv [%s] in=%d out=%d\n",
			*inbuf, *inbytesleft, *outbytesleft);

	inp = *inbuf;
	outp= *outbuf;

	while(*inp) {
		*outp = *inp;
		inp++;
		outp++;
		len++;
		*inbytesleft--;
		*outbytesleft--;
	}

	*inbuf = inp;
	*outbuf = outp;	
	return len;	
}

int iconv_close(iconv_t cd)
{
	fprintf(stderr,"DBG: iconv_close()\n");
	return 0;
}

