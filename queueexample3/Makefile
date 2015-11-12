prog: queue.o main.o
	c++ -o prog main.o queue.o
queue.o: queue.cpp queue.h
	c++ -c queue.cpp
main.o: main.cpp queue.h
	c++ -c main.cpp
clean:
	rm *.o
	rm prog
