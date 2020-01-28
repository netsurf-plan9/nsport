</$objtype/mkfile

DIRS=\
	posix/src \
	libwapcaplet/src \
	libparserutils/src \
	libhubbub/src \
	libnsbmp/src \
	libnsgif/src \
	libnspsl/src \
	libcss/src \
	libdom/src \
	libnsutils/src \
	libnslog/src \
	libnsfb/src \
	libnsfb/test \
	libutf8proc/src


all:V:
	for(i in $DIRS) @{
		echo '***** Building:' $i '*****'
		cd $i
		mk
	}
	{
		echo '***** Building: the netsurf browser *****'
		cd netsurf
		mk
	}

clean:V:
	for(i in $DIRS) @{
		echo '***** Cleaing: ' $i '*****'
		cd $i
		mk clean
	}
	{
		echo '***** Cleaing: the netsurf browser *****'
		cd netsurf
		mk clean
	}
