all: mylib.o
	gcc -o main.exe main.c mylib.o

mylib.o: 
	gcc -o mylib.o -c mylib/mylib.c
	
clear:
	rm -rf *.exe
	rm -rf *.o

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.exe timecomplexity.c mylib.o 
	./main.exe

space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o spacecomplexityIterative.exe spacecomplexityIterative.c mylib.o
	gcc -o spacecomplexityRecursive.exe spacecomplexityRecursive.c mylib.o