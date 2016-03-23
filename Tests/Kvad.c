#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int  Kvad(int a,int b,int c,double *x1,double *x2) {
  double d;  
  d=sqrt(double((b*b-4*a*c)));
  if (d<0) {printf("Net Reshenia"); return 1;  }
  if (d=0) {*x1=((double)-b/(double)2*a); printf("x1=x2=%2.2f",*x1); return 1; }
 if (d>0) {*x1=((-b+d)/2*a); *x2=((-b-d)/2*a); printf("x1=%2.2f  x2=%2.2f",*x1,*x2); return 1;}
 return 0;
}
