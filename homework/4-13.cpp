#include <iostream>
using namespace std;

class Circle{
 double r;
public:
 Circle(double x=1):r(x){}
 double getArea() const { return 3.14159*r*r; }
};

int main(){
  Circle c(  5 );
     cout<<"面积:"<<c.getArea()<<endl;
}
