#include <iostream>
using namespace std;

class Cat{
   static int n;
public:
   Cat(){ n++; }
   static int getNumOfCats(){ return n; }
};

int Cat::n = 0;
