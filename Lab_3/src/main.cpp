#include <iostream>
#include <fstream>
#include <cmath>

#include "../inc/test.h"
#include "../inc/timer.h"
#include "../inc/qsort.h"
#include "../inc/list.h"


using namespace std;
int main(int argc, char ** argv)
{
  qsort s1;
  List l1;
  int i,j;
  l1.Fill(1000000);
  i=l1.Get_Size()-1;
  int *tablica=new int[i];
  for(j=0;j<i;j++)
    {
      tablica[j]=l1.Get(1);
      l1.Remove(0);
      cout << tablica[j] << endl;
    }
  s1.sort(tablica,0,i-1);
  cout << "posortowano!!!" <<endl;
  for(j=0;j<i;j++){
    cout << tablica[j] << endl;
    l1.Add(1,tablica[j]);}
  delete [] tablica;
	return 0;
}
