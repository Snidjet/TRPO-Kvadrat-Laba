#include <ifstream>
#inclide <stdlib.h>
#include<stdio.h>
#include "Kvad.c"
#include<iostream>
using namespace std;
int main (int a,int b, int c) {
  
  int x1,x2,f,i;
setlocate(LC ALL,"rus"); // отображение Кириллицы
      
  for (i=1; i<=2;i++) {
ifstream test("test%d",i);
test>>a; test>>b; test>>c;
    
 f=Kvad(a,b,c,*x1,*x2);
 if (f==1) printf("test№%d=Complite \n",i); else printf("test№%d=Failed \n",i);
 }
test.close();
}
