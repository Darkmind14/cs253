dynrpn: dynstack.o calc.o
	c++ -std=c++0x -o dynrpn calc.o dynstack.o
dynstack.o: dynstack.cpp dynstack.h
	c++ -std=c++0x -c dynstack.cpp
calc.o: calc.cpp dynstack.h
	c++ -std=c++0x -c calc.cpp
clean:
	rm *.o
	rm dynstack
