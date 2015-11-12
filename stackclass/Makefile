stack: stack.o main.o
	c++ -o stack main.o stack.o
stack.o: stack.cpp stack.h
	c++ -c stack.cpp
main.o: main.cpp stack.h
	c++ -c main.cpp
clean:
	rm *.o
	rm stack
