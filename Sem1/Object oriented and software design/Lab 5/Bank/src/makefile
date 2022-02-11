all: myprog

myprog: ../obj/Client.o ../obj/CurrentAccount.o ../obj/SavingsAccount.o ../obj/main.o
	g++ -o ../bin/myprog.exe ../obj/Client.o ../obj/CurrentAccount.o ../obj/SavingsAccount.o ../obj/main.o

../obj/Client.o: Client.cpp ../include/Client.h
	g++ -o ../obj/Client.o -c Client.cpp

../obj/CurrentAccount.o: CurrentAccount.cpp ../include/CurrentAccount.h
	g++ -o ../obj/CurrentAccount.o -c CurrentAccount.cpp

../obj/SavingsAccount.o: SavingsAccount.cpp ../include/SavingsAccount.h
	g++ -o ../obj/SavingsAccount.o -c SavingsAccount.cpp

../obj/main.o: main.cpp
	g++ -o ../obj/main.o -c main.cpp


clean:
	rm ../obj/*.o
	rm ../bin/myprog.exe
	rm ../bin/out.txt
