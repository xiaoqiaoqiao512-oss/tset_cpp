#include <iostream>
using namespace std;

int x = 5, y = 7;

void myFunction() {
    int y = 10;
    cout << "x from myFunction " << x << "\n";
    cout << "y from myFunction " << y << "\n\n";
}

int main() {
    cout << "x from main " << x << "\n";
    cout << "y from main " << y << "\n";

    myFunction();

    cout << "Back from myFunction!\n\n";

    cout << "x from main " << x << "\n";
    cout << "y from main " << y << "\n";
    return 0;
}
//给我的感觉是强调了局部变量和全局变量的区别，在不同的作用域相同的变量名可以代表不同的值