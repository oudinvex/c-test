test:main.o part1.o part2.o part3.o
	gcc -o test main.o part1.o part2.o part3.o
main.o:main.c lib.h
	gcc -c main.c
part1.o:part1.c
	gcc -c part1.c
part2.o:part2.c
	gcc -c part2.c
part3.o:part3.c
	gcc -c part3.c
clean:
	rm *.o
