#include "5-4.h"
using namespace std;

int main(){
   Cat a;
   Cat b;
   cout<<Cat::getNumOfCats()<<endl;
   Cat *p=new Cat;
   cout<<Cat::getNumOfCats()<<endl;
   delete p;
   cout<<Cat::getNumOfCats()<<endl;
   return 0;
}
