prog: main.o queue.o
	c++ -o prog main.o queue.o
main.o: main.cpp queue.h
	c++ -c main.cpp
queue.o: queue.cpp queue.h
	c++ -c queue.cpp
clean:
	rm *.o
	rm prog
