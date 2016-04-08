#include "../inc/qsort.h"
int qsort::divide(int tab[], int d, int g){
  int x = tab[d], a = d, b = g, temp;
  while(1)
    {
      while(tab[a]<x) a++;
      while(tab[b]>x)b--;
      if(a<b)
	{
	  temp=tab[a];
	  tab[a]=tab[b];
	  tab[b]=temp;
	  a++;
	  b--;
	}
      else return b;
    }
}

void qsort::sort(int tab[], int d, int g){
  int p;
  if(d<g){
  p=divide(tab, d, g);
  sort(tab, d, p);
  sort(tab, p+1, g);
  }
}
