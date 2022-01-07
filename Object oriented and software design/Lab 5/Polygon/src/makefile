all: ../bin/myprog.exe

../bin/myprog.exe: ../obj/main.o ../obj/Poly.o
	g++ -o ../bin/myprog.exe ../obj/main.o ../obj/Poly.o

../obj/main.o: main.cpp
	g++ -o ../obj/main.o -c main.cpp

../obj/Poly.o: Poly.cpp ../include/Poly.h ../include/Function.h
	g++ -o ../obj/Poly.o -c Poly.cpp

clean:
	rm ../bin/myprog.exe
	rm ../obj/*.o
