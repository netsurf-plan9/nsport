</$objtype/mkfile

DIRS=\
	posix/src \
	libwapcaplet/src \
	libparserutils/src \
	libhubbub/src \
	libnsbmp/src \
	libnsgif/src \
	libsvgtiny/src \
	libnspsl/src \
	libcss/src \
	libdom/src \
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
		echo '***** Cleaing: ' $i '*****'
		cd $i
		mk clean
	}
