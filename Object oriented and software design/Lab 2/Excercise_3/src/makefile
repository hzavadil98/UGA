all: myprog

myprog: ../obj/PPoint.o ../obj/main.o ../obj/Array_of_PPoint.o
	g++ -o ../bin/myprog.exe ../obj/PPoint.o ../obj/main.o ../obj/Array_of_PPoint.o

../obj/PPoint.o: ../src/PPoint.cpp ../include/PPoint.h
	g++ -c ../src/PPoint.cpp -o ../obj/PPoint.o

../obj/main.o: ../src/main.cpp
	g++ -c ../src/main.cpp -o ../obj/main.o

../obj/Array_of_PPoint.o: ../src/Array_of_PPoint.cpp ../include/Array_of_PPoint.h
	g++ -c ../src/Array_of_PPoint.cpp -o ../obj/Array_of_PPoint.o

doc:
	doxygen ../doc/Doxyfile


clean:
	rm ../obj/*.o
	rm ../bin/myprog
