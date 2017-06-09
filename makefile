edit : Main.o foo.o 
	cc -o edit Main.o foo.o

Main.o : Main.c foo.h
	cc -c Main.c
foo.o : foo.c foo.h
	cc -c foo.c
clean :
	rm edit Main.o foo.o

