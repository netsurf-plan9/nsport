all:V: $LIB

$LIB: $OBJ $HFILES
	ar rv $LIB $OBJ

%.$O:	%.c $HFILES
	$CC $CFLAGS -c -o $target $stem.c

clean:V:
	rm -f $OBJ $LIB
