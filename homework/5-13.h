#include <iostream>
using namespace std;

class X;

void h(X*);

class X{
   int i;
public:
   X(int a=0):i(a){}
   friend void h(X*);
   friend class Z;
   friend class Y;
   int get(){return i;}
};

class Y{
public:
   void g(X* p){
      p->i += 1;
   }
};

class Z{
public:
   void f(X* p){
      p->i += 5;
   }
};

void h(X* p){
   p->i += 10;
}
