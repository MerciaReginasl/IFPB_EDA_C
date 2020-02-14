#include <stdio.h>

int main (){
  int a, b;
  double c;
  int *p;
  double *q;
  a=10;
  b=a+50;
  p=&a;
  q=&c;
  a=b*2;
  c=b-*p;

  printf("%d %d %lf\n", a, b, *q);

  return 0;
}
