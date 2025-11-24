#include "5-13.h"
using namespace std;

int main(){
   X a(3);
   Y y;
   Z z;
   y.g(&a);
   z.f(&a);
   h(&a);
   cout<<a.get()<<endl;
   return 0;
}
