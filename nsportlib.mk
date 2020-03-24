all:V: $LIB

$LIB: $OBJ $HFILES
	ar rv $LIB $OBJ

clean:V:
	rm -f $OBJ $LIB
