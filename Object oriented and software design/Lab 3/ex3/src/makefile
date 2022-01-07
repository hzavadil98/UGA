all: myprog

myprog: ../obj/MyCollection.o ../obj/main.o ../obj/utils.o
	g++ -o ../bin/myprog.exe ../obj/MyCollection.o ../obj/main.o ../obj/utils.o

../obj/MyCollection.o: ../src/MyCollection.cpp ../include/MyCollection.h
	g++ -c ../src/MyCollection.cpp -o ../obj/MyCollection.o

../obj/main.o: ../src/main.cpp
	g++ -c ../src/main.cpp -o ../obj/main.o

../obj/utils.o: ../src/utils.cpp ../include/utils.h
	g++ -c ../src/utils.cpp -o ../obj/utils.o

doc:
	doxygen ../doc/Doxyfile




clean:
	rm ../obj/*.o
	rm ../bin/myprog.exe
	rm -r ../doc/html
	rm -r ../doc/latex
