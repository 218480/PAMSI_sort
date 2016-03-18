Lab2.out: main.o timer.o tab.o badania.o tabtest.o
	g++ main.o timer.o tab.o badania.o tabtest.o -o Lab2.out

main.o: main.cpp
	g++ -c main.cpp -o main.o

timer.o: timer.cpp
	g++ -c timer.cpp -o timer.o

tab.o: tab.cpp
	g++ -c tab.cpp -o tab.o

badania.o: badania.cpp
	g++ -c badania.cpp -o badania.o

tabtest.o: tabtest.cpp
	g++ -c tabtest.cpp -o tabtest.o
clean:
	rm -f *.o

