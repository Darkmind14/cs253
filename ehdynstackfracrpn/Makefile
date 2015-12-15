dynrpn: dynstack.o calc.o fraction.o
	c++ -std=c++0x -o dynrpn calc.o dynstack.o fraction.o
dynstack.o: dynstack.cpp dynstack.h
	c++ -std=c++0x -c dynstack.cpp
calc.o: calc.cpp dynstack.h
	c++ -std=c++0x -c calc.cpp
test: fraction.o dynstack.o main.o
	c++ -std=c++0x -o test main.o dynstack.o fraction.o
main.o: main.cpp dynstack.h fraction.h
	c++ -std=c++0x -c main.cpp
fraction.o: fraction.cpp fraction.h
	c++ -std=c++0x -c fraction.cpp
clean:
	rm *.o
	rm dynstack
	rm dynrpn
	rm test
