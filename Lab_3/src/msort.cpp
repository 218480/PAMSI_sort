#include "../inc/msort.h"
void msort::merge(int tab[], int d, int g){
int i, a, b, p, s=(g-d)/2, temp[g-d];
for(i=0;i<=g-d;i++)
  temp[i]=tab[d+i];
p=d;
a=0;
b=s+1;
while(a<=s && b<=(g-d))
  {
  if(temp[a]<temp[b])
    tab[p++]=temp[a++];
  else
    tab[p++]=temp[b++];
  }
while(a<=s) tab[p++]=temp[a++];

}

void msort::sort(int tab[], int d, int g){
int s;
if(d<g){
  s=(d+g)/2;
  sort(tab,d,s);
  sort(tab,s+1,g);
  merge(tab,d,g);
  }
}
