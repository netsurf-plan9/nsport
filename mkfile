</$objtype/mkfile

DIRS=\
	posix/src \
	libwapcaplet-0.4.1/src \
	libparserutils-0.2.4/src \
	libhubbub-0.3.5/src \
	libnsbmp-0.1.5/src \
	libnsgif-0.2.1/src \
	libnspsl-0.1.5/src \
	libcss-0.9.0/src \
	libdom-0.4.0/src \
	libnsutils-0.0.5/src \
	libnslog-0.1.2/src \
	libnsfb-0.2.1/src \
	libnsfb-0.2.1/test \
	libutf8proc-2.4.0-1/src


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
