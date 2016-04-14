#include <iostream>
#include <fstream>
#include <cmath>

#include "../inc/test.h"
#include "../inc/timer.h"
#include "../inc/qsort.h"
#include "../inc/msort.h"
#include "../inc/list.h"
#include "../inc/pomiarqsort.h"
#include "../inc/queue.h"


using namespace std;
int main(int argc, char ** argv)
{
pomiarqsort p1;
Queue q1;
  int i,t;
q1.Push(10);
q1.Push(100);
q1.Push(1000);
q1.Push(1000000);
q1.Push(1000000000);
  for(i=0;i<5;i++){t=q1.Get();
cout << "czas dla " << t << " danych: " << p1.wykonaj_pomiar(t) << " ms" << endl;}
	return 0;
}
