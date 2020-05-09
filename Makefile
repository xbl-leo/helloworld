interset.o: interest.c
	gcc -c interest.c

interest: interest.o
	gcc -o interest interest.o



clean:
	rm -f *.o *.exe
