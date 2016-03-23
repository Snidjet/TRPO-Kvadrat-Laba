void Kvad(int a,int b,int c, &x1,&x2) {
double d;
d=sqrt(b*b-4*a*c);
if (d<0) {printf("Нет решений"); break; }
if (d=0) {x1=(-b/2*a) printf("x1=x2=%2.2f",x1); break;}
if (d>0) {x1=((-b+d)/2*a); x2=((-b-d)/2*a); printf("x1=%2.2f  x2=%2.2f",x1,x2); break;}

}
