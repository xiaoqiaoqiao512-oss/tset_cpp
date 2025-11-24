#include <iostream>
using namespace std;

class DataType{
private:
    enum TypeTag{ CHAR,INT,FLOAT } type;
    union{ char c; int i; float f; } data;

public:
    DataType(char x){ type = CHAR; data.c = x; }
    DataType(int x){type=INT; data.i=x;}
    DataType(float x){ type = FLOAT; data.f = x;}

    void show() const{
        switch(type){
            case CHAR: cout<< "字符型: " << data.c << endl; break;
            case INT: cout<<"整型: "<<data.i<<endl; break;
            case FLOAT:cout<<"浮点型: "<<data.f<<endl;break;
        }
    }
};

int main(){
    DataType a('X');DataType b(77);
        DataType c(2.718f);
a.show();
        b.show();
   c.show();
    return 0;
}
