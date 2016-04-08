Lab3.out: ./obj/main.o ./obj/timer.o ./obj/tabtest.o ./obj/stack.o ./obj/queue.o ./obj/list.o ./obj/node.o ./obj/qsort.o
	g++ ./obj/main.o ./obj/timer.o ./obj/stack.o  ./obj/test.o ./obj/queue.o ./obj/list.o ./obj/node.o ./obj/qsort.o -o Lab3.out

./obj/main.o: ./src/main.cpp ./inc/qsort.h
	mkdir ./obj
	g++ -c ./src/main.cpp -o ./obj/main.o

./obj/timer.o: ./src/timer.cpp
	g++ -c ./src/timer.cpp -o ./obj/timer.o

./obj/stack.o: ./src/stack.cpp
	g++ -c ./src/stack.cpp -o ./obj/stack.o

./obj/queue.o: ./src/queue.cpp
	g++ -c ./src/queue.cpp -o ./obj/queue.o

./obj/tabtest.o: ./src/test.cpp
	g++ -c ./src/test.cpp -o ./obj/test.o

./obj/list.o: ./src/list.cpp
	g++ -c ./src/list.cpp -o ./obj/list.o

./obj/node.o: ./src/node.cpp
	g++ -c ./src/node.cpp -o ./obj/node.o

./obj/qsort.o: ./src/qsort.cpp ./inc/qsort.h
	g++ -c ./src/qsort.cpp -o ./obj/qsort.o
clean:
	rm -f ./obj/*.o *.out
	rmdir ./obj 

