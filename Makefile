interest: interest.o
	gcc -o interest interest.o
interset.o: interest.c
	gcc -c interest.c

clean:
	rm -f *.o *.exe
