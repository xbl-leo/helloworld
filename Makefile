<<<<<<< HEAD
interset.o: interest.c
	gcc -c interest.c

interest: interest.o
	gcc -o interest interest.o

=======
interest: interest.o
	gcc -o interest interest.o
interset.o: interest.c
	gcc -c interest.c
>>>>>>> 4d6c11cc1109106898c3c89b6555aae020399647

clean:
	rm -f *.o *.exe
