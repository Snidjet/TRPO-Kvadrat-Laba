#include <fstream>
#include <stdlib.h>
#include<stdio.h>
#include "Kvad.c"
#include<iostream>
using namespace std;
int main () {
  int a,b,c,f,i;
  double x1,x2;

  ofstream res("res.txt"); // файл результатов
 
 
  for (i=1; i<=2;i++) {
ifstream test("test%c.txt",i);
test>>a; test>>b; test>>c;
    
 f=Kvad(a,b,c,&x1,&x2);
 if (f==1) res<<"test№"<<i<<"=Complite \n"; else res<<"test№"<<i<<"=Failed \n";
 f=0;
 res<<"123";
  }

}
