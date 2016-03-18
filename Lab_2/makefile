Lab1.out: main.o timer.o tab.o
	g++ main.o timer.o tab.o -o Lab1.out

main.o: main.cpp
	g++ -c main.cpp -o main.o

timer.o: timer.cpp
	g++ -c timer.cpp -o timer.o

tab.o: tab.cpp
	g++ -c tab.cpp -o tab.o

clean:
	rm -f *.o

