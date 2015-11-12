rpn: stack.o calc.o
	c++ -o rpn calc.o stack.o
stack.o: stack.cpp stack.h
	c++ -c stack.cpp
calc.o: calc.cpp stack.h
	c++ -c calc.cpp
clean:
	rm *.o
	rm rpn
