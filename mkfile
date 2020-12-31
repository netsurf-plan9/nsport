</$objtype/mkfile

DIRS=\
	expat/lib \
	zlib \
	libjpeg \
	libpng \
	posix/src \
	libwapcaplet/src \
	libparserutils/src \
	libhubbub/src \
	libnsbmp/src \
	libnsgif/src \
	libnspsl/src \
	libcss/src \
	libdom/src \
	libsvgtiny/src \
	libnsutils/src \
	libnslog/src \
	libnsfb/src \
	libnsfb/test \
	libutf8proc/src\
	netsurf


all:V:
	for(i in $DIRS) @{
		echo '***** Building:' $i '*****'
		cd $i
		mk
	}

clean:V:
	for(i in $DIRS) @{
		echo '***** Cleaning: ' $i '*****'
		cd $i
		mk clean
	}
