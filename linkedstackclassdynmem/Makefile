dynstack: dynstack.o main.o
	c++ -std=c++0x -o dynstack main.o dynstack.o
dynstack.o: dynstack.cpp dynstack.h
	c++ -std=c++0x -c dynstack.cpp
main.o: main.cpp dynstack.h
	c++ -std=c++0x -c main.cpp
clean:
	rm *.o
	rm dynstack
