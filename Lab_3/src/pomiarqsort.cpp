#include "../inc/list.h"
#include "../inc/qsort.h"
#include "../inc/timer.h"
#include "../inc/pomiarqsort.h"
/*przyjmuje ilosc danych, generuje losowe wartosci i je sortuje*/
  double pomiarqsort::wykonaj_pomiar(int ilosc){
  double czas=0;
  qsort s1;
  List l1;
  Timer t1;
  int i,j,m;
  for(i=0;i<10;i++){
    l1.Fill(ilosc-1);
    m=l1.Get_Size()-1;
    int *tablica=new int[m];
    for(j=0;j<m;j++)
      {
        tablica[j]=l1.Get(1);
        l1.Remove(0);
      }
    t1.Start();
    s1.sort(tablica,0,j-1);
    t1.Stop();
    czas+=t1.Show();
    delete [] tablica;
  }
	return czas/10;
}
