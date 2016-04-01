Lab3.out: ./obj/main.o ./obj/timer.o ./obj/tab.o ./obj/tabtest.o
	g++ ./obj/main.o ./obj/timer.o ./obj/tab.o  ./obj/tabtest.o -o Lab3.out

./obj/main.o: ./src/main.cpp
	g++ -c ./src/main.cpp -o ./obj/main.o

./obj/timer.o: ./src/timer.cpp
	g++ -c ./src/timer.cpp -o ./obj/timer.o

./obj/tab.o: ./src/tab.cpp
	g++ -c ./src/tab.cpp -o ./obj/tab.o

./obj/tabtest.o: ./src/tabtest.cpp
	g++ -c ./src/tabtest.cpp -o ./obj/tabtest.o
clean:
	rm -f ./obj/*.o *.out
	rmdir ./obj 

