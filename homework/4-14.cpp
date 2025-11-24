#include <iostream>
using namespace std;

class Tree{
    int ages;
public:
    Tree(int a=0):ages(a){}
    void grow(int y){ ages+=y; }
    void age() const {
        cout<<"树龄:"<<ages<<" 年"<<endl;
    }
};

int main(){
    Tree t( 3 ); t.age();
      t.grow(5);
  t.age();
    return 0;
}
