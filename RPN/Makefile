rpn: stack.o rpn.o
	c++ -o rpn rpn.o stack.o
stack.o: stack.cpp stack.h
	c++ -c stack.cpp
rpn.o: rpn.cpp stack.h
	c++ -c rpn.cpp
clean:
	rm *.o
	rm rpn
