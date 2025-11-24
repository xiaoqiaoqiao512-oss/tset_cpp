#include <iostream>
using namespace std;

class Complex{
 double r,i;
public:
 Complex(double a,double b):r(a),i(b){}
 Complex(double a=0):r(a),i(0){}
 void add(const Complex& c){
   r+=c.r; i+=c.i;
 }
 void show() const { cout<<r<<"+"<<i<<"i"<<endl; }
};

int main(){
 Complex c1( 3 ,5);
 Complex c2 = 4.5;
     c1.add(c2);
 c1.show();
}
